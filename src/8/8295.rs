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
    let (n, m, p) = get_line!(usize, usize, usize);
    let mut count = 0;

    for i in 0..n {
        for j in 0..m {
            if (i + j + 2) * 2 >= p {
                count += (n - i) * (m - j);
            }
        }
    }

    println!("{}", count);
}