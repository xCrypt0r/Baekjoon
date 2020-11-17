/**
 * 14406. 좌중을 사로잡는 건배사
 * 
 * 작성자: xCrypt0r
 * 언어: Rust 2018
 * 사용 메모리: 13,028 KB
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
    let line = get_line!(String);

    if line == "걸.걸.걸" {
        println!("더 사랑할걸, 더 참을걸, 더 즐길걸.");
    } else if line == "사.우.나" {
        println!("사랑과 우정을 나누자");
    } else if line == "지.화.자" {
        println!("지금부터 화합하자");
    } else if line == "재.건.축" {
        println!("재미있고 건강하게, 축복하며 살자");
    } else if line == "오.징.어" {
        println!("오래도록 징그럽게 어울리자");
    } else if line == "해.당.화" {
        println!("해가 갈수록 당당하고 화려하게");
    } else if line == "우.아.미" {
        println!("우아하고 아름다운 미래를 위하여");
    } else if line == "재.개.발" {
        println!("재미있고 개성있게 발전적으로 살자");
    } else if line == "사.이.다" {
        println!("사랑하자 이 세상 다 바쳐");
    } else if line == "주.전.자" {
        println!("주인의식을 갖고 전문성을 갖추고 자신있게 살자");
    } else if line == "나.가.자" {
        println!("나라, 가정, 자신의 발전을 위하여");
    } else if line == "이.기.자" {
        println!("이런 기회를 자주 만들자");
    } else if line == "청.바.지" {
        println!("청춘은 바로 지금부터");
    }
}