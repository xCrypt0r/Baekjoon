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

macro_rules! get_n_lines {
    ( $n :expr; $( $t :ty ),+ ) => {
        {
            use std::io::BufRead;
            
            let stdin = std::io::stdin();
            let vec = stdin.lock().lines().take($n).map(|line| {
                let line = line.unwrap();
                let mut iter = line.split_whitespace();
  
                ( $( iter.next().unwrap().parse::<$t>().unwrap() ),+ )
            }).collect::<Vec<_>>();
            
            vec
        }
    }
}

fn main() {
    let n = get_line!(usize);
    let v = get_n_lines!(n; i32);
    let mut dp = vec![0; n];
    
    dp[0] = v[0];

    if n > 1 {
        dp[1] = cmp::max(v[0] + v[1], v[1]);
    }
    
    if n > 2 { 
        dp[2] = cmp::max(v[0] + v[2], v[1] + v[2]);
    }

    for i in 3..n {
        dp[i] = cmp::max(dp[i - 2] + v[i], dp[i - 3] + v[i - 1] + v[i]);
    }

    println!("{}", dp[n - 1]);
}
