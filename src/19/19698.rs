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
    let (N, W, H, L) = get_line!(i32, i32, i32, i32);
    let max = (W / L) * (H / L);

    println!("{}", if max > N { N } else { max });
}
