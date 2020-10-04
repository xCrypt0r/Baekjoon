use std::io;

fn main() {
    let stdin = io::stdin();
    let mut input = String::new();

    stdin.read_line(&mut input).unwrap();

    let v: Vec<i32> = input
        .split_whitespace()
        .map(|input| input.parse().unwrap())
        .collect();
    let (n, c) = (v[0], v[1]);
    let mut s = c;

    for _ in 0..n {
        input.clear();
        stdin.read_line(&mut input).unwrap();

        let playtime: Vec<i32> = input
            .trim()
            .split(':')
            .map(|input| input.parse().unwrap())
            .collect();

        s += playtime[0] * 60 + playtime[1] - c;
    }

    println!("{:02}:{:02}:{:02}", s / 3600, s / 60 % 60, s % 60);
}
