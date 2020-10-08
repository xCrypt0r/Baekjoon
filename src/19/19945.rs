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
    let (mut bit, mut count) = (1, 0);

    if n < 0 {
        println!("32");
    } else if n < 2 {
        println!("1");
    } else {
        while bit <= n {
            count += 1;
            bit *= 2;
        }

        println!("{}", count);
    }
}
