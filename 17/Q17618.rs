#![allow(non_snake_case)]

use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let N = s.trim().parse::<i32>().unwrap();
    let mut count = 0;

    for x in 1..N + 1 {
        let (mut divider, mut temp) = (0, x);

        while temp > 0 {
            divider += temp % 10;
            temp /= 10;
        }

        if x % divider == 0 {
            count += 1;
        }
    }

    print!("{}", count);
}
