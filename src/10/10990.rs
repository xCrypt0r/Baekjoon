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
    let N = get_line!(i32);

    for i in 0..N {
        for _ in 0..(N - i - 1) {
            print!(" ");
        }

        print!("*");

        for _ in 0..(i * 2 - 1) {
            print!(" ");
        }

        if i != 0 {
            print!("*");
        }

        println!();
    }
}