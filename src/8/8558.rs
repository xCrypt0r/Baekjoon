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
    let n = get_line!(u32);

    println!("{}", if n < 5 { f(n) % 10 } else { 0 });
}

fn f(n: u32) -> u32 {
    if n < 2 {
        1
    } else {
        n * f(n - 1)
    }
}