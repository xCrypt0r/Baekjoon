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
    let (a, m) = get_line!(f64, f64);
    let mut i = 1.0;

    loop {
        let res = (m * i + 1.0) / a;
        
        if res == res.round() {
            println!("{}", res.round());

            break;
        }

        i += 1.0;
    }
}
