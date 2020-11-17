/**
 * 9094. 수학적 호기심
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 16,136 KB
 * 소요 시간: 536 ms
 * 해결 날짜: 2020년 10월 4일
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
    let T = get_line!(i32);

    for _ in 0..T {
        let (n, m) = get_line!(i32, i32);
        let mut count = 0;

        for a in 1..n {
            for b in (a + 1)..n {
                if ((a.pow(2) + b.pow(2) + m) as f64 / (a * b) as f64).fract() == 0.0 {
                    count += 1;
                }
            }
        }

        println!("{}", count);
    }
}
