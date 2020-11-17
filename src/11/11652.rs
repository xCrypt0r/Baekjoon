/**
 * 11652. 카드
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 16,332 KB
 * 소요 시간: 36 ms
 * 해결 날짜: 2020년 10월 10일
 */

use std::io::{self, BufRead, Write};
use std::collections::HashMap;

fn main() {
    let stdin = io::stdin();
    let lines = stdin.lock().lines().skip(1);
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let mut counts: HashMap<i64, usize> = HashMap::new();
    let (mut max, mut max_count) = (0, 0);

    for card in lines.map(|line| line.unwrap().parse::<i64>().unwrap()) {
        *counts.entry(card).or_default() += 1;
    }

    for (card, count) in counts {
        if count > max_count || (count == max_count && max > card) {
            max = card;
            max_count = count;
        }   
    }

    writeln!(out, "{}", max).unwrap();
}
