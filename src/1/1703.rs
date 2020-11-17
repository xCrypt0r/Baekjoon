/**
 * 1703. 생장점
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,024 KB
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
    loop {
        let v = get_list!(usize);
        let mut res = 1;

        if v[0] == 0 {
            break;
        }

        for i in 1..=v[0] {
            res *= v[i *  2 - 1];
            res -= v[i * 2];
        }

        println!("{}", res);
    }
}
