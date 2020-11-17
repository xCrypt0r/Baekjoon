/**
 * 9288. More Dice
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 124 ms
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
    let n = get_line!(i32);

    for i in 1..=n {
        let sum = get_line!(i32);

        println!("Case {}:", i);
        
        for a in 1..=6 {
            for b in a..=6 {
                if a + b == sum {
                    println!("({},{})", a, b);
                }
            }
        }
    }
}
