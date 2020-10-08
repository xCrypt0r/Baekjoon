use std::io::{self, BufRead, Write};

fn main() {
    let stdin = io::stdin();
    let lines = stdin.lock().lines();
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let mut left = 0;

    for line in lines.map(|line| line.unwrap()) {
        if line == "고무오리 디버깅 끝" {
            break;
        }

        if line == "문제" {
            left += 1;
        } else if line == "고무오리" {
            left += if left == 0 { 2 } else { -1 };
        }
    }

    writeln!(out, "{}", if left == 0 { "고무오리야 사랑해" } else { "힝구" }).unwrap();
}