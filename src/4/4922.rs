/**
 * 4922. Walk Like an Egyptian
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 12 ms
 * 해결 날짜: 2020년 10월 11일
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

fn main() {
    loop {
        let N = get_line!(i32);

        if N == 0 {
            break;
        }

        println!("{} => {}", N, N * (N - 1) + 1);
    }
}
