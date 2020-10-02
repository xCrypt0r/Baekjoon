#![allow(non_snake_case)]

use std::io;
use io::Write;

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
    let T = get_line!(i32);

    for _ in 0..T {
        let (mut x, w) = get_line!(i32, i32);
        let mut bounce = 0;

        while x < w {
            x *= 2;
            bounce += 1;
        }
        
        writeln!(out, "{}", bounce).unwrap();
    }
}
