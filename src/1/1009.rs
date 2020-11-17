/**
 * 1009. 분산처리
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,036 KB
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
    let T = get_line!(usize);
    let remains = vec![
        vec![10, 10, 10, 10], vec![1, 1, 1, 1], vec![2, 4, 8, 6],
        vec![3, 9, 7, 1], vec![4, 6, 4, 6], vec![5, 5, 5, 5],
        vec![6, 6, 6, 6], vec![7, 9, 3, 1], vec![8, 4, 2, 6],
        vec![9, 1, 9, 1]
    ];

    for _ in 0..T {
        let (a, b) = get_line!(usize, usize);

        writeln!(out, "{}", remains[a % 10][(b - 1) % 4]).unwrap();
    }
}
