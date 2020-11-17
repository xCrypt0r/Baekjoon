/**
 * 19813. Dates
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,036 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2020년 10월 4일
 */

use std::io;
use io::Write;

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();
  
            io::stdin().read_line(&mut line).unwrap();
  
            let mut iter = line.split_whitespace();
  
            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let n = get_line!(i32);

    for _ in 0..n {
        let date = get_line!(String);
        let v: Vec<i32> = date
            .split(&['.', '/'][..])
            .map(|s| s.parse().unwrap())
            .collect();

        if date.contains('.') {
            writeln!(out, "{:02}.{:02}.{:04} {:02}/{:02}/{:04}", v[0], v[1], v[2], v[1], v[0], v[2]).unwrap();    
        } else {
            writeln!(out, "{:02}.{:02}.{:04} {:02}/{:02}/{:04}", v[1], v[0], v[2], v[0], v[1], v[2]).unwrap();
        }
    }
}
