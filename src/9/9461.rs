/**
 * 9461. 파도반 수열
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 10월 4일
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
    let mut memo: Vec<i64> = vec![0; 101];

    memo[1] = 1;
    memo[2] = 1;

    for _ in 0..T {
        let N = get_line!(usize);

        for n in 3..=N {
            if memo[n] == 0 {
                memo[n] = memo[n - 2] + memo[n - 3];
            }
        }

        println!("{}", memo[N]);
    }
}
