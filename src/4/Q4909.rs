macro_rules! get_list {
    ( $t: ty ) => {
        {
            let mut line = String::new();
  
            std::io::stdin().read_line(&mut line).unwrap();
  
            let list: Vec<$t> = line
                .split_whitespace()
                .map(|s| s.parse::<$t>().unwrap())
                .collect();

            list
        }
    }
}

fn main() {
    loop {
        let score = get_list!(i32);
        let mut sum = score.iter().sum::<i32>();

        if sum == 0 {
            break;
        }

        if let Some(max) = score.iter().max() {
            sum -= max;
        }

        if let Some(min) = score.iter().min() {
            sum -= min;
        }

        println!("{}", sum as f64 / 4.0);
    }
}
