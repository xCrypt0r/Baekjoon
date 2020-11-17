/**
 * 11320. 삼각 무늬 - 1
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 3일
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
    let T = get_line!(i32);

    for _ in 0..T {
        let (mut A, mut B) = get_line!(i32, i32);

        A *= A;
        B *= B;

        println!("{}", A / B + (if A % B != 0 { 1 } else { 0 }));
    }
}
