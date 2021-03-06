/**
 * 11874. ZAMKA
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
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
    let L = get_line!(i32);
    let D = get_line!(i32);
    let X = get_line!(i32);
    let mut v = Vec::new();

    for i in L..=D {
        let mut sum = 0;
        let mut temp = i;

        while temp != 0 {
            sum += temp % 10;
            temp /= 10;
        }

        if sum == X {
            v.push(i);
        }
    }

    println!("{}\n{}", v.iter().min().unwrap(), v.iter().max().unwrap());
}