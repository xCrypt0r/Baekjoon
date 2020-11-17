/**
 * 6131. 완전 제곱수
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
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

fn main() {
    let N = get_line!(i32);
    let mut count = 0;

    for i in 1..=500 {
        for j in 1..=500 {
            if j * j == i * i + N {
                count += 1;
            }
        }
    }

    println!("{}", count);
}