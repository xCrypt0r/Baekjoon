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
    let (a, b, c) = get_line!(i32, i32, i32);

    if b + c == a {
        println!("{}={}+{}", a, b, c);
    } else if b - c == a {
        println!("{}={}-{}", a, b, c);
    } else if b * c == a {
        println!("{}={}*{}", a, b, c);
    } else if b / c == a {
        println!("{}={}/{}", a, b, c);
    } else if a + b == c {
        println!("{}+{}={}", a, b, c);
    } else if a - b == c {
        println!("{}-{}={}", a, b, c);
    } else if a * b == c {
        println!("{}*{}={}", a, b, c);
    } else if a / b == c {
        println!("{}/{}={}", a, b, c);
    }
}