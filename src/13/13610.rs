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
    let (X, Y) = get_line!(f64, f64);
    let mut count = 1.0;

    loop {
        if count >= X * count / Y + 1.0 {
            break;
        }

        count += 1.0;
    }

    println!("{}", count as i32);
}
