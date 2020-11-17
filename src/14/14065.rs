/**
 * 14065. Gorivo
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,076 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 11일
 */

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
    let x = get_line!(f64);

    println!("{:.6}", 100.0 / ((1.609344 / 3.785411784) * x));
}