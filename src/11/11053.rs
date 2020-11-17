/**
 * 11053. 가장 긴 증가하는 부분 수열
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 4일
 */

#![allow(non_snake_case)]

use std::cmp;

macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();
  
            std::io::stdin().read_line(&mut line).unwrap();
  
            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    let N = get_list!(usize)[0];
    let A = get_list!(i32);
    let mut dp = vec![1; N + 1];
    let mut res = 1;

    for i in 0..N {
        for j in 0..i {
            if A[i] > A[j] {
                dp[i] = cmp::max(dp[i], dp[j] + 1);
            }
        }

        res = cmp::max(res, dp[i]);
    }

    println!("{}", res);
}
