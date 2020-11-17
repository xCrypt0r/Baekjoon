/**
 * 13363. Jumbled Compass
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
 * 소요 시간: 4 ms
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
    let n1 = get_line!(i32);
    let n2 = get_line!(i32);
    let mut res = n2 - n1;

    if res > 180 {
        res -= 360;
    } else if res <= -180 {
        res += 360;
    }

    println!("{}", res);
}
