/**
 * 18063. Jazz Enthusiast
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 10월 2일
 */

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
