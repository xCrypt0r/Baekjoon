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
        let v = get_list!(usize);
        let mut res = 1;

        if v[0] == 0 {
            break;
        }

        for i in 1..=v[0] {
            res *= v[i *  2 - 1];
            res -= v[i * 2];
        }

        println!("{}", res);
    }
}
