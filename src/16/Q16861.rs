use std::io;

fn main() {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let mut n = s.trim().parse::<u32>().unwrap();

    loop {
        let sum = get_sum_of_digits(n);

        if n % sum == 0 {
            break;
        }

        n += 1;
    }

    println!("{}", n);
}

fn get_sum_of_digits(x: u32) -> u32 {
    let digits: Vec<u32> = x
        .to_string()
        .chars()
        .map(|c| c.to_digit(10).unwrap())
        .collect();
    
    digits.iter().sum::<u32>()
}
