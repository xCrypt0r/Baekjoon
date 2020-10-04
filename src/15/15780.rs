#![allow(non_snake_case)]

use std::io;

fn main() {
    let stdin = io::stdin();
    let mut s = String::new();

    stdin.read_line(&mut s).unwrap();

    let v: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let mut N = v[0];

    s.clear();
    stdin.read_line(&mut s).unwrap();

    let A: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    for a in A {
        N -= (a + 1) / 2;
    }

    print!("{}", if N <= 0 { "YES" } else { "NO" });
}
