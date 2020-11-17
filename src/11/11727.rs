/**
 * 11727. 2×n 타일링 2
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 3일
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
    let mut memo: Vec<i64>= vec![1; 1001];

    for i in 2..=n {
        memo[i] = (memo[i - 1] + memo[i - 2] * 2) % 10007;
    }

    println!("{}", memo[n]);
}
