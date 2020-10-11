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
    let a: i32 = get_list!(i32).iter().sum();
    let b: i32 = get_list!(i32).iter().sum();

    println!("{}", if a > b { "Gunnar" } else if a < b { "Emma" } else { "Tie" });
}