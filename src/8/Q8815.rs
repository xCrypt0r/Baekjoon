#![allow(non_snake_case)]

use std::io;

fn main() {
    let stdin = io::stdin();
    let mut s = String::new();
    
    stdin.read_line(&mut s).unwrap();

    let Z = s.trim().parse::<u8>().unwrap();

    for _ in 0..Z {
        s.clear();
        stdin.read_line(&mut s).unwrap();

        let N = s.trim().parse::<usize>().unwrap();
        let answer = ['B', 'C', 'B', 'C', 'D', 'C', 'D', 'A', 'D', 'A', 'B', 'A'];

        println!("{}", if N == 1 { 'A' } else { answer[(N -2) % 12] });
    }
}
