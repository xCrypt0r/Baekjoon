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
    let (A, B, C, N) = get_line!(i32, i32, i32, i32);

    for a in 0..=50 {
        for b in 0..=50 {
            for c in 0..=50 {
                if A * a + B * b + C * c == N {
                    println!("1");

                    return;
                }
            }
        }
    }

    println!("0");
}
