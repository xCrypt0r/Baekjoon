/**
 * 2670. 연속부분최대곱
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,216 KB
 * 소요 시간: 88 ms
 * 해결 날짜: 2020년 10월 4일
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

macro_rules! get_n_lines {
    ( $n :expr; $( $t :ty ),+ ) => {
        {
            use std::io::BufRead;
            
            let stdin = std::io::stdin();
            let vec = stdin.lock().lines().take($n).map(|line| {
                let line = line.unwrap();
                let mut iter = line.split_whitespace();
  
                ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
            }).collect::<Vec<_>>();
            
            vec
        }
    }
}

fn main() {
    let N = get_line!(usize);
    let v = get_n_lines!(N; f64);
    let mut product: f64;
    let mut res = -1.0;
    
    for i in 0..N {
        product = 1.0;

        for j in i..N {
            product *= v[j];
            res = if res < product { product } else { res };
        }
    }

    println!("{:.3}", res);
}
