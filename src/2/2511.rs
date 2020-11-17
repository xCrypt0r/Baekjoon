/**
 * 2511. 카드놀이
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 13일
 */

#![allow(non_snake_case)]

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
    let A = get_list!(i32);
    let B = get_list!(i32);
    let (mut a, mut b) = (0, 0);

    for i in 0..10 {
        if A[i] > B[i] {
            a += 3;
        } else if A[i] < B[i] {
            b += 3;
        } else {
            a += 1;
            b += 1;
        }
    }

    println!("{} {}", a, b);

    if a > b {
        println!("A");
    } else if a < b {
        println!("B");
    } else {
        let mut winner = 'D';

        for i in (0..10).rev() {
            if A[i] > B[i] {
                winner = 'A';

                break;
            } else if A[i] < B[i] {
                winner = 'B';

                break;
            }
        }

        println!("{}", winner);
    }
}