/**
 * 20004. 베스킨라빈스 31
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,032 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 10일
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
    let A = get_line!(usize);

    for i in 1..=A {
        if 30 % (i + 1) == 0 {
            writeln!(out, "{}", i).unwrap();
        }
    }
}
