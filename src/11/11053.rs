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
