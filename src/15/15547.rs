/**
 * 15547. Lorem ipsum
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,032 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 10월 8일
 */

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
    let (a, b) = get_line!(usize, usize);
    let data = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec quis lectus sit amet ante suscipit tempor. Aenean dapibus finibus tortor vitae facilisis. Nulla facilisi. Donec suscipit ante a sapien gravida eleifend. Curabitur in lectus ut enim semper venenatis. Aenean elit nibh, hendrerit nec nunc in, dictum cursus dolor. Aenean eget lectus risus. Cras sollicitudin quam vitae augue mollis bibendum. Aliquam euismod vulputate dolor at tristique. Praesent elementum pretium velit non interdum. Nunc posuere faucibus magna id pretium. Maecenas congue, velit eget semper porttitor, tellus tortor porttitor dui, tristique lobortis quam sem ac odio.";
    let v: Vec<&str> = data.split(" ").collect();

    println!("{}", &v[a - 1..b].join(" "));
}