#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let A: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    s.clear();
    io::stdin().read_line(&mut s).unwrap();

    let B: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let (mut a, mut b) = (0, 0);

    for i in 0..A.len() {
        if A[i] > B[i] {
            a += 1;
        }
        else if A[i] < B[i] {
            b += 1;
        }
    }

    println!("{}", if a > b { "A" } else if a < b { "B" } else { "D" });
}
