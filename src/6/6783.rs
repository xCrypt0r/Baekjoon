/**
 * 6783. English or French?
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 10월 3일
 */

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
