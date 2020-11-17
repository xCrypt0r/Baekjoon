/**
 * 2783. 삼각 김밥
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,088 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 7일
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

macro_rules! get_n_lines {
    ( $n :expr; $( $t :ty ),+ ) => {
        {
            use std::io::BufRead;

            let stdin = std::io::stdin();
            let vec = stdin.lock().lines().take($n).map(|line| {
                let line = line.unwrap();
                let mut iter = line.split_whitespace();

                ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
            }).collect::<Vec<_>>();

            vec
        }
    }
}

fn main() {
    let (X, Y) = get_line!(f64, f64);
    let N = get_line!(usize);
    let prices = get_n_lines!(N; f64, f64);
    let mut min = X / Y * 1000.0;

    for price in prices {
        let res = price.0 / price.1 * 1000.0;

        if min > res {
            min = res;
        }
    }

    println!("{:.2}", min);
}