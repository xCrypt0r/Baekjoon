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
    let A = get_line!(usize);

    for i in 1..=A {
        if 30 % (i + 1) == 0 {
            writeln!(out, "{}", i).unwrap();
        }
    }
}
