/**
 * 9625. BABBA
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 3일
 */

#![allow(non_snake_case)]

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();
  
            std::io::stdin().read_line(&mut line).unwrap();
  
            let mut iter = line.split_whitespace();
  
            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

fn main() {
    let K = get_line!(usize);
    let mut A = vec![1; 46];
    let mut B = vec![0; 46];

    A[1] = 0;
    B[1] = 1;

    for i in 2..=K {
        A[i] = A[i - 1] + A[i - 2];
        B[i] = B[i - 1] + B[i - 2];
    }

    println!("{} {}", A[K], B[K]);
}
