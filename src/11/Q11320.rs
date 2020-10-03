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
    let T = get_line!(i32);

    for _ in 0..T {
        let (mut A, mut B) = get_line!(i32, i32);

        A *= A;
        B *= B;

        println!("{}", A / B + (if A % B != 0 { 1 } else { 0 }));
    }
}
