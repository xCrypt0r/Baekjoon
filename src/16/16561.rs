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
    let (mut x, mut count) = (1, 2);

    for _ in (9..n).step_by(3) {
        x += count;
        count += 1;
    }

    println!("{}", x);
}