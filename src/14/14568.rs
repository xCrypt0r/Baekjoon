/**
 * 14568. 2017 연세대학교 프로그래밍 경시대회
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 3일
 */

#![allow(non_snake_case)]

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();
  
            std::io::stdin().read_line(&mut line).unwrap();
  
            let mut iter = line.split_whitespace();
  
            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

fn main() {
    let N = get_line!(i32);
    let mut count = 0;
    
    for a in (2..N).step_by(2) {
        for b in 1..N {
            for c in 1..N {
                if a + b + c == N  && c - b >= 2 {
                    count += 1;
                }
            }
        }
    }

    println!("{}", count);
}
