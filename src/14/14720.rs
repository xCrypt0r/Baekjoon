/**
 * 14720. 우유 축제
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 9월 30일
 */

#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();
    s.clear();
    io::stdin().read_line(&mut s).unwrap();

    let stores: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let mut count = 0;

    for store in stores {
        let target = [0, 1, 2][count % 3];

        if store == target {
            count += 1;
        }
    }

    print!("{}", count);
}
