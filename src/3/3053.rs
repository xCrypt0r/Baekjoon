/**
 * 3053. 택시 기하학
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,052 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 10월 13일
 */

#![allow(non_snake_case)]

use std::{io, f64};

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
    let R = get_line!(i32);

    println!("{:.6}", R.pow(2) as f64 * f64::consts::PI);
    println!("{:.6}", R.pow(2) as f64 * 2.0);
}