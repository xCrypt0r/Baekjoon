/**
 * 15115. Delayed Work
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,076 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 11일
 */

#![allow(non_snake_case)]

use std::f64;

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
    let (K, P, X) = get_line!(f64, f64, f64);
    let mut min = f64::MAX;

    for i in 1..=10000 {
        let temp = i as f64 * X + P * K / i as f64;

        min = if min > temp { temp } else { min };
    }

    println!("{:.3}", min);
}