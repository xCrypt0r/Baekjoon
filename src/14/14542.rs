use std::io::{self, Write};

macro_rules! get_line {
    ( $( $t: ty ),+ ) => {
        {
            let mut line = String::new();

            io::stdin().read_line(&mut line).unwrap();

            let mut iter = line.split_whitespace();

            ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
        }
    }
}

macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();

            io::stdin().read_line(&mut line).unwrap();

            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    let stdout = io::stdout();
    let mut out = io::BufWriter::new(stdout.lock());
    let mut case = 0;

    loop {
        let n = get_line!(i32);
        let mut sum = 0;

        if n == 0 {
            return;
        }

        for i in 1..=n {
            let v = get_list!(i32);

            if i == 1 {
                sum += v[0];
            } else if i == n {
                sum += v.iter().sum::<i32>();
            } else {
                sum += v[0] + v[v.len() - 1];
            }
        }

        case += 1;

        writeln!(out, "Case #{}:{}", case, sum).unwrap();
    }
}