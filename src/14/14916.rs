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
    let mut n = get_line!(i32);
    let mut count = 0;

    if n % 5 == 0 {
        count = n / 5;
    } else {
        loop {
            n -= 2;
            count += 1;

            if n < 0 {
                count = -1;

                break;
            } else if n % 5 == 0 {
                count += n / 5;

                break;
            }
        }
    }

    println!("{}", count);
}
