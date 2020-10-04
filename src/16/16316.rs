use std::io;

fn main() {
    let stdin = io::stdin();
    let mut s = String::new();

    stdin.read_line(&mut s).unwrap();
    s.clear();
    stdin.read_line(&mut s).unwrap();

    let bites = s.trim().split(' ');
    let mut count = 1;
    let mut flag = true;

    for bite in bites {
        if bite.parse::<i32>().is_ok() {
            if bite != count.to_string() {
                flag = false;

                break;
            }
        }

        count += 1;
    }

    println!("{}", if flag { "makes sense" } else { "something is fishy" });
}
