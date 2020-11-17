/**
 * 17618. 신기한 수
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 9월 29일
 */

#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let N = s.trim().parse::<i32>().unwrap();
    let mut count = 0;

    for x in 1..N + 1 {
        let (mut divider, mut temp) = (0, x);

        while temp > 0 {
            divider += temp % 10;
            temp /= 10;
        }

        if x % divider == 0 {
            count += 1;
        }
    }

    print!("{}", count);
}
