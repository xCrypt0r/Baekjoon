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
        let (n, m) = get_line!(i32, i32);
        let mut count = 0;

        for a in 1..n {
            for b in (a + 1)..n {
                if ((a.pow(2) + b.pow(2) + m) as f64 / (a * b) as f64).fract() == 0.0 {
                    count += 1;
                }
            }
        }

        println!("{}", count);
    }
}
