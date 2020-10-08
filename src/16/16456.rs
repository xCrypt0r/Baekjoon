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
    let n = get_line!(usize);
    let m = 1000000009;
    let mut dp = vec![0; n + 3];

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for i in 3..n {
        dp[i] = (dp[i - 1] + dp[i - 3]) % m;
    }

    println!("{}", dp[n - 1]);
}