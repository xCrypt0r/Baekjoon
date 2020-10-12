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
    let N = get_line!(usize);
    let mut A = vec![0; N];

    A[0] = 1;
    A[1] = 2;
    A[N - 1] = 997;

    for i in 2..N - 1 {
        A[i] = A[i - 1] + 1;
    }

    println!("{}", N);
    println!("{}", A.iter().map(|&a| a.to_string() + " ").collect::<String>());
}