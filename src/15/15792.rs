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
    let (mut A, B) = get_line!(i32, i32);

    print!("{}.", A / B);

    A %= B;

    for _ in 0..1000 {
        A *= 10;

        print!("{}", A / B);

        A %= B;

        if A == 0 {
            break;
        }
    }
}