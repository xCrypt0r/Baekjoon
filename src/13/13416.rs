/**
 * 13416. 주식 투자
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,036 KB
 * 소요 시간: 32 ms
 * 해결 날짜: 2020년 10월 11일
 */

#![allow(non_snake_case)]

use std::io::{self, Write};
use std::cmp;

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
    let T = get_line!(usize);

    for _ in 0..T {
        let N = get_line!(usize);
        let mut max = Vec::new();

        for _ in 0..N {
            let stock = get_list!(i32);

            max.push(cmp::max(*stock.iter().max().unwrap(), 0));
        }

        writeln!(out, "{}", max.iter().sum::<i32>()).unwrap();
    }
}