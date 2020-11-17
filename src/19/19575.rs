/**
 * 19575. Polynomial
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 188 ms
 * 해결 날짜: 2020년 10월 8일
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
    let (N, x) = get_line!(i64, i64);
    let m = 1000000007;
    let mut sum = 0;

    for i in 0..=N {
        let (a, _) = get_line!(i64, i64);

        sum = if i == 0 { a } else { (sum * x + a) % m };
    }

    println!("{}", sum);
}