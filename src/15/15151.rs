/**
 * 15151. Incomplete Book
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 1일
 */

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let v: Vec<i32> = s
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    let (k, mut d) = (v[0], v[1]);
    let base: i32 = 2;
    let mut count = 0;

    loop {
        d -= k * base.pow(count);

        if d >= 0 {
            count += 1;
        }
        else {
            break;
        }
    }

    println!("{}", count);
}
