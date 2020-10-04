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
    let n = get_line!(usize);
    let mut t: Vec<i64> = vec![0; n + 1];

    t[0] = 1;

    for i in 1..=n {
        for j in 0..i {
            t[i] += t[j] * t[i - j - 1];
        }
    }

    println!("{}", t[n]);
}
