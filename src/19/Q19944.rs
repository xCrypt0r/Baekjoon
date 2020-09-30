#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let v: Vec<i32> = s
        .as_mut_str()
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let N: i32 = v[0];
    let M: i32 = v[1];

    if M == 1 || M == 2 {
        println!("NEWBIE!");
    }
    else if M <= N {
        println!("OLDBIE!");
    }
    else {
        println!("TLE!");
    }
}
