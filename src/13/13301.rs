/**
 * 13301. 타일 장식물
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
    let N = get_line!(usize);
    let mut memo: Vec<i64> = vec![0; 81];

    memo[1] = 4;
    memo[2] = 6;

    for i in 3..=N {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    println!("{}", memo[N]);
}
