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
    let mut K = get_line!(i32);
    let N = get_line!(i32);

    for i in 1..N {
        println!("{}", i);

        K -= i;
    }

    println!("{}", K);
}
