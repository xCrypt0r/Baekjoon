/**
 * 2991. 사나운 개
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 12일
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
    let (A, B, C, D) = get_line!(i32, i32, i32, i32);
    let (P, M, N) = get_line!(i32, i32, i32);

    for x in [P, M, N].iter() {
        let mut count = 0;
        let a = x % (A + B);
        let b = x % (C + D);

        if a <= A && a != 0 {
            count += 1;
        }

        if b <= C && b != 0 {
            count += 1;
        }

        println!("{}", count);
    }
}