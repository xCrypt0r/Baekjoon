/**
 * 8719. Piłeczka
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,032 KB
 * 소요 시간: 316 ms
 * 해결 날짜: 2020년 10월 2일
 */

#![allow(non_snake_case)]

use std::io;
use io::Write;

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();
  
            io::stdin().read_line(&mut line).unwrap();
  
            let mut iter = line.split_whitespace();
  
            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let T = get_line!(i32);

    for _ in 0..T {
        let (mut x, w) = get_line!(i32, i32);
        let mut bounce = 0;

        while x < w {
            x *= 2;
            bounce += 1;
        }
        
        writeln!(out, "{}", bounce).unwrap();
    }
}
