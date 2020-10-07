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
    let (a, b, c, d, e, f) = get_line!(i32, i32, i32, i32, i32, i32);

    for i in -999..1000 {
        for j in -999..1000 {
            if (a * i) + (b * j) == c && (d * i) + (e * j) == f {
                println!("{} {}", i, j);

                break;
            }
        }
    }
}