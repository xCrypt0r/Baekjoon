#![allow(non_snake_case)]

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
    let mut N = get_line!(i32) - 2;
    let mut count = 1;
    let mut amount = 6;

    while N >= 0 {
        count += 1;
        N -= amount;
        amount += 6;
    }

    println!("{}", count);
}