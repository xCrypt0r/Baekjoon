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
    let mut count = 0;
    
    for a in (2..N).step_by(2) {
        for b in 1..N {
            for c in 1..N {
                if a + b + c == N  && c - b >= 2 {
                    count += 1;
                }
            }
        }
    }

    println!("{}", count);
}
