#![allow(non_snake_case)]

use std::io;

fn main() {
    let stdin = io::stdin();
    let mut s = String::new();

    stdin.read_line(&mut s).unwrap();

    let K = s.trim().parse::<i32>().unwrap();

    for i in 1..=K {
        s.clear();
        stdin.read_line(&mut s).unwrap();

        let v: Vec<f64> = s
            .split_whitespace()
            .map(|s| s.parse().unwrap())
            .collect();
        let (E, A) = (v[0], v[1]);
        let mut d = (E - 1.0) / A;

        println!("Data Set {}:", i);

        if E <= A {
            println!("no drought");
        } else {
            let mut exp = 0;

            while (d / 5.0).floor() >= 1.0 {
                exp += 1;
                d /= 5.0;
            }

            println!("{}drought", "mega ".repeat(exp));
        }

        println!();
    }
}
