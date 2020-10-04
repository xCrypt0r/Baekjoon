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
    let t = get_line!(i32);

    for i in 1..=t {
        let (mut n, d) = get_line!(i32, i32);
        let x = n / d;

        n -= d * x;

        if n == 0 {
            println!("Case {}: {}", i, x);
        } else if x == 0 {
            println!("Case {}: {}/{}", i, n, d);
        } else {
            println!("Case {}: {} {}/{}", i, x, n, d);
        }
    }
}
