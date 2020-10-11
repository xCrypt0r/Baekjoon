use std::cmp;

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
    let (x1, y1, x2, y2) = get_line!(i32, i32, i32, i32);
    let (x3, y3, x4, y4) = get_line!(i32, i32, i32, i32);
    let mut x = vec![x1, x2, x3, x4];
    let mut y = vec![y1, y2, y3, y4];

    x.sort();
    y.sort();

    let len = cmp::max(x[3] - x[0], y[3] - y[0]);

    println!("{}", len * len);
}
