/**
 * 15637. Lotto
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 4일
 */

use std::io;

fn main() {
    let answer = vec![
        103, 88, 91, 99, 101, 86, 96, 100, 71, 
        91, 96, 91, 98, 102, 96, 85, 102, 97,
        91, 112, 85, 79, 86, 91, 97, 98, 110,
        80, 88, 80, 95, 83, 93, 109, 88, 91,
        103, 90, 95, 113, 81, 86, 97, 93, 93
    ];
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let n = s.trim().parse::<usize>().unwrap();

    println!("{}", answer[n - 1]);
}
