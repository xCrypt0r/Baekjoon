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
    let (N, x) = get_line!(i64, i64);
    let m = 1000000007;
    let mut sum = 0;

    for i in 0..=N {
        let (a, _) = get_line!(i64, i64);

        sum = if i == 0 { a } else { (sum * x + a) % m };
    }

    println!("{}", sum);
}