/**
 * 14215. 세 막대
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 3일
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
    let mut v = get_list!(u32);

    v.sort();

    if v[0] + v[1] > v[2] {
        println!("{}", v.iter().sum::<u32>());
    } else {
        println!("{}", (v[0] + v[1]) * 2 - 1); 
    }
}
