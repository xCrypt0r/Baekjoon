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
    let mut memo: Vec<i64> = vec![0; 81];

    memo[1] = 4;
    memo[2] = 6;

    for i in 3..=N {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    println!("{}", memo[N]);
}
