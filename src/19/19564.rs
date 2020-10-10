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
    let v: Vec<char> = get_line!(String).chars().collect();
    let mut count = 1;

    for i in 0..v.len() - 1 {
        if v[i] >= v[i + 1] {
            count += 1;
        }
    }

    println!("{}", count);
}
