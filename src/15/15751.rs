/**
 * 15751. Teleportation
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 12일
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
    let (a, b, x, y) = get_line!(i32, i32, i32, i32);
    let v = [(a - b).abs(), (a - x).abs() + (b - y).abs(), (a - y).abs() + (b - x).abs()];

    println!("{}", v.iter().min().unwrap());
}