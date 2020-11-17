/**
 * 19944. 뉴비의 기준은 뭘까?
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 9월 29일
 */

#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let v: Vec<i32> = s
        .as_mut_str()
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let N: i32 = v[0];
    let M: i32 = v[1];

    if M == 1 || M == 2 {
        println!("NEWBIE!");
    }
    else if M <= N {
        println!("OLDBIE!");
    }
    else {
        println!("TLE!");
    }
}
