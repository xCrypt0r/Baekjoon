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
    let (a, b, x, y) = get_line!(i32, i32, i32, i32);
    let v = [(a - b).abs(), (a - x).abs() + (b - y).abs(), (a - y).abs() + (b - x).abs()];

    println!("{}", v.iter().min().unwrap());
}