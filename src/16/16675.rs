/**
 * 16675. 두 개의 손
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,036 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 1일
 */

#![allow(non_snake_case)]

use std::io;
use std::collections::HashMap;

fn main() {
    let mut s = String::new();
    
    io::stdin().read_line(&mut s).unwrap();

    let v: Vec<&str> = s.split_whitespace().collect();
    let (ML, MR, TL, TR) = (v[0], v[1], v[2], v[3]);
    let mut map = HashMap::new();
    
    map.insert("R", "P");
    map.insert("P", "S");
    map.insert("S", "R");

    if ML == MR && [TL, TR].contains(&map[ML]) {
        println!("TK");
    }
    else if TL == TR && [ML, MR].contains(&map[TL]) {
        println!("MS");
    }
    else {
        println!("?");
    }
}
