/**
 * 13699. 점화식
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 4일
 */

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
    let n = get_line!(usize);
    let mut t: Vec<i64> = vec![0; n + 1];

    t[0] = 1;

    for i in 1..=n {
        for j in 0..i {
            t[i] += t[j] * t[i - j - 1];
        }
    }

    println!("{}", t[n]);
}
