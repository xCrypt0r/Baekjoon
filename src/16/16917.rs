/**
 * 16917. 양념 반 후라이드 반
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 7일
 */

#![allow(non_snake_case)]

use std::cmp;

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
    let (A, B, C, X, Y) = get_line!(i64, i64, i64, i64, i64);

    if A + B < C * 2 {
        println!("{}", A * X + B * Y);
    } else {
        let m = cmp::min(X, Y);

        println!("{}", C * m * 2 + cmp::min(C * 2, A) * cmp::max(0, X - m) + cmp::min(C * 2, B) * cmp::max(0, Y - m));
    }
}