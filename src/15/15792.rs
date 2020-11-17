/**
 * 15792. A/B - 2
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
    let (mut A, B) = get_line!(i32, i32);

    print!("{}.", A / B);

    A %= B;

    for _ in 0..1000 {
        A *= 10;

        print!("{}", A / B);

        A %= B;

        if A == 0 {
            break;
        }
    }
}