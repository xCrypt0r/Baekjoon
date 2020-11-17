/**
 * 16756. Pismo
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 14,588 KB
 * 소요 시간: 12 ms
 * 해결 날짜: 2020년 10월 8일
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

macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();

            io::stdin().read_line(&mut line).unwrap();

            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let N = get_line!(usize);
    let v = get_list!(i32);
    let mut min = std::i32::MAX;

    for i in 0..N - 1 {
        let interval = (v[i + 1] - v[i]).abs();

        if min > interval {
            min = interval;
        }
    }

    writeln!(out, "{}", min).unwrap();
}