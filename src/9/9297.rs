/**
 * 9297. Reducing Improper Fractions
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 44 ms
 * 해결 날짜: 2020년 10월 2일
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
    let t = get_line!(i32);

    for i in 1..=t {
        let (mut n, d) = get_line!(i32, i32);
        let x = n / d;

        n -= d * x;

        if n == 0 {
            println!("Case {}: {}", i, x);
        } else if x == 0 {
            println!("Case {}: {}/{}", i, n, d);
        } else {
            println!("Case {}: {} {}/{}", i, x, n, d);
        }
    }
}
