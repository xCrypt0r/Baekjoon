#![allow(non_snake_case)]

use std::io::{self, Write};
use std::cmp;

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

macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();

            io::stdin().read_line(&mut line).unwrap();

            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let T = get_line!(usize);

    for _ in 0..T {
        let N = get_line!(usize);
        let mut max = Vec::new();

        for _ in 0..N {
            let stock = get_list!(i32);

            max.push(cmp::max(*stock.iter().max().unwrap(), 0));
        }

        writeln!(out, "{}", max.iter().sum::<i32>()).unwrap();
    }
}