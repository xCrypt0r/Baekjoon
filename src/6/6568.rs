/**
 * 6568. 귀도 반 로썸은 크리스마스날 심심하다고 파이썬을 만들었다
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 9일
 */

use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();

    loop {
        let mut memory = vec![0; 32];

        for i in 0..32 {
            let bin = lines.next();
            
            if !bin.is_some() {
                return;
            }

            let bin = bin.unwrap().ok().unwrap();
            
            if bin.is_empty() {
                return;
            }

            memory[i] = isize::from_str_radix(&bin, 2).unwrap() as usize;
        }
        
        let (mut pc, mut accumulator) = (0, 0);

        loop {
            let instruction = memory[pc];
            let operator = instruction / 32;
            let value = instruction % 32;

            if operator == 7 {
                break;
            }

            pc = (pc + 1) % 32;

            match operator {
                0 => memory[value] = accumulator,
                1 => accumulator = memory[value],
                2 => {
                    if accumulator == 0 {
                        pc = value;   
                    }
                },
                4 => accumulator = (accumulator + 255) % 256,
                5 => accumulator = (accumulator + 1) % 256,
                6 => pc = value,
                _ => ()
            }
        }
        
        for i in (0..8).rev() {
            print!("{}", (accumulator >> i) & 1);
        }

        println!();
    }
}
