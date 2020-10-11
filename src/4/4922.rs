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
    loop {
        let N = get_line!(i32);

        if N == 0 {
            break;
        }

        println!("{} => {}", N, N * (N - 1) + 1);
    }
}
