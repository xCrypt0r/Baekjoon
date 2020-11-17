/**
 * 1912. 연속합
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 14,064 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 4일
 */

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
    let n = get_list!(usize)[0];
    let v = get_list!(i32);
    let mut dp = vec![v[0]; n + 1];
    let mut res = dp[0];

    for i in 1..n {
        dp[i] = cmp::max(dp[i - 1] + v[i], v[i]);
        res = cmp::max(res, dp[i]);
    }

    println!("{}", res);
}
