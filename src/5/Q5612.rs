use std::cmp;

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
    let n = get_line!(i32);
    let m = get_line!(i32);
    let (mut max, mut amount) = (m, m);

    for _ in 0..n {
        let (a, b) = get_line!(i32, i32);

        amount += a - b;

        if amount < 0 {
            println!("0");

            return;
        }

        max = cmp::max(max, amount);
    }

    println!("{}", max);
}
