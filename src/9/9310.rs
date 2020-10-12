#![allow(non_snake_case)]

use std::io::{self, Write};

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();

            io::stdin().read_line(&mut line).unwrap();

                let mut iter = line.split_whitespace();

            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());

    loop {
        let N = get_line!(i32);

        if N == 0 {
            break;
        }

        let (A, B, C) = get_line!(i32, i32, i32);

        if B * 2 == A + C {
            let d = B - A;

            writeln!(out, "{}", N * (A * 2 + (N - 1) * d) / 2).unwrap();
        } else {
            let r = B / A;

            writeln!(out, "{}", A * (r.pow(N as u32) - 1) / (r - 1)).unwrap();
        }
    }
}