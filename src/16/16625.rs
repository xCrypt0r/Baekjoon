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
    let (p, q, s) = get_line!(usize, usize, usize);
    
    println!("{}", if s >= p * q / gcd(p, q) { "yes" } else { "no" });
}

fn gcd(first: usize, second: usize) -> usize {
    let mut max = first;
    let mut min = second;

    if min > max {
        let val = max;

        max = min;
        min = val;
    }

    loop {
        let res = max % min;

        if res == 0 {
            return min;
        }

        max = min;
        min = res;
    }
}
