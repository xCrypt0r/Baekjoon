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
    let s = get_line!(String);
    let mut count = 0;

    for c in s.chars() {
        let mut p = c as i32;

        if c > 'R' {
            p -= 1;
        }

        if c > 'W' {
            p -= 1;
        }

        count += (p - 'A' as i32) / 3 + 3;
    }

    println!("{}", count);
}