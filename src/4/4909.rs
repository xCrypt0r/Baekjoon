/**
 * 4909. Judging Olympia
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,056 KB
 * 소요 시간: 76 ms
 * 해결 날짜: 2020년 10월 2일
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
        let score = get_list!(i32);
        let mut sum = score.iter().sum::<i32>();

        if sum == 0 {
            break;
        }

        if let Some(max) = score.iter().max() {
            sum -= max;
        }

        if let Some(min) = score.iter().min() {
            sum -= min;
        }

        println!("{}", sum as f64 / 4.0);
    }
}
