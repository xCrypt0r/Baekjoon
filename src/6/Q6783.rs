use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let lines = stdin.lock().lines();
    let (mut t, mut s) = (0, 0);

    for line in lines.map(|line| line.unwrap().to_ascii_lowercase()) {
        t += line.matches('t').count();
        s += line.matches('s').count();
    }

    println!("{}", if t > s { "English" } else { "French" });
}
