/**
 * 14563. 완전수
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,036 KB
 * 소요 시간: 20 ms
 * 해결 날짜: 2020년 10월 8일
 */

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
    let _ = get_line!(i32);
    let v = get_list!(i64);

    for n in v {
        let mut sum = 0;

        for i in 1..n {
            if n % i == 0 {
                sum += i;
            }
        }

        writeln!(out, "{}", if sum == n { "Perfect" } else if sum > n { "Abundant" } else { "Deficient" }).unwrap();
    }
}