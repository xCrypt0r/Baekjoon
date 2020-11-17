/**
 * 10250. ACM 호텔
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,032 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 13일
 */

#![allow(non_snake_case)]

use std::io::{self, Write};

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
        let (H, _, N) = get_line!(i32, i32, i32);
        let mut a = N % H;
        let mut b = N / H + 1;

        if a == 0 {
            a = H;
        }

        if N % H == 0 {
            b -= 1;
        }

        writeln!(out, "{}", a * 100 + b).unwrap();
    }
}