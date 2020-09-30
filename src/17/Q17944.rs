#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let v: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let (N, T) = (v[0], v[1]);
    let (max, min) = (N * 2, 1);
    let mut count = 0;
    let mut flag = true;

    for _ in 0..T {
        if flag {
            count += 1;
        }
        else {
            count -= 1;
        }

        if flag && count >= max {
            flag = false;
        }
        else if !flag && count <= min {
            flag = true;
        }
    }

    print!("{}", count);
}
