/**
 * 5101. Sequences
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,108 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 10일
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
    loop {
        let (a, d, x) = get_line!(i32, i32, i32);

        if a == 0 && d == 0 && x == 0 {
            break;
        }

        if (x - a) % d == 0 && ((d > 0 && x >= a) || (d < 0 && x <= a)) { 
            println!("{}", (x - a) / d + 1)
        } else { 
            println!("X")
        }
    }
}
