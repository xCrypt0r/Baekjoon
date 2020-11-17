/**
 * 8932. 7종 경기
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 16,164 KB
 * 소요 시간: 452 ms
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
        let (a, b, c, d, e, f, g) = get_line!(f64, f64, f64, f64, f64, f64, f64);
        let mut res = 0;

        res += (9.23076 * (26.7 - a).powf(1.835)) as i32;
        res += (1.84523 * (b - 75.0).powf(1.348)) as i32;
        res += (56.0211 * (c - 1.5).powf(1.05)) as i32;
        res += (4.99087 * (42.5 - d).powf(1.81)) as i32;
        res += (0.188807 * (e - 210.0).powf(1.41)) as i32;
        res += (15.9803 * (f - 3.8).powf(1.04)) as i32;
        res += (0.11193 * (254.0 - g).powf(1.88)) as i32;

        println!("{}", res);
    }
}
