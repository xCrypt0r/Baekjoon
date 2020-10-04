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
    let mut N = get_line!(i32);
    let O = get_line!(i32);
    
    N -= 1;

    let d = O / N;

    println!("{} {}", if O == N * d { O + d - 1 } else { O + d }, O + d);
}
