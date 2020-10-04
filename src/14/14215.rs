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
    let mut v = get_list!(u32);

    v.sort();

    if v[0] + v[1] > v[2] {
        println!("{}", v.iter().sum::<u32>());
    } else {
        println!("{}", (v[0] + v[1]) * 2 - 1); 
    }
}
