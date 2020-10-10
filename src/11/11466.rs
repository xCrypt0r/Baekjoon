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
    let (h, w) = get_line!(f64, f64);
    let (h1, h2, h3) = (h / 3.0, h / 2.0, h);
    let (w1, w2, w3) = (w, w / 2.0, w / 3.0);
    let mut mins = vec![
        if h1 > w1 { w1 } else { h1 },
        if h2 > w2 { w2 } else { h2 },
        if h3 > w3 { w3 } else { h3 }
    ];

    mins.sort_by(|x, y| x.partial_cmp(y).unwrap());
    
    println!("{:.3}", mins[2]);
}
