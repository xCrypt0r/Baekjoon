/**
 * 9550. 아이들은 사탕을 좋아해
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 8 ms
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

macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();

            std::io::stdin().read_line(&mut line).unwrap();

            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    let T = get_line!(i32);

    for _ in 0..T {
        let (_, K) = get_line!(i32, i32);
        let candies = get_list!(i32);
        let mut res = 0;

        for candy in candies {
            res += candy / K;
        }

        println!("{}", res);
    }
}
