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
    let mut count = 0;
        
    for a in 0..=5 {
        for b in a..=5 {
            if a + b == n {
                count += 1;
            }
        }
    }

    println!("{}", count);
}
