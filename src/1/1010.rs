/**
 * 1010. 다리 놓기
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 20 ms
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
    let mut memo = vec![vec![0; 31]; 31];

    for i in 0..31 {
        memo[i][i] = 1;
        memo[i][0] = 1;
    }

    for i in 1..31 {
        for j in 1..31 {
            memo[i][j] = memo[i - 1][j] + memo[i - 1][j - 1];
        }
    }

    for _ in 0..T {
        let (N, M) = get_line!(usize, usize);

        println!("{}", memo[M][N]);
    }
}
