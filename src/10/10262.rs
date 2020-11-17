/**
 * 10262. 주사위 게임
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 11일
 */

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
    let a: i32 = get_list!(i32).iter().sum();
    let b: i32 = get_list!(i32).iter().sum();

    println!("{}", if a > b { "Gunnar" } else if a < b { "Emma" } else { "Tie" });
}