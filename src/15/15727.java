/**
 * 15727. 조별과제를 하려는데 조장이 사라졌다
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,412 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int distance = scanner.nextInt();
		scanner.close();
		
		int maxSpeed = distance / 5;
		int restOfDistance = distance % 5;
		
		if(restOfDistance > 0) {
			System.out.println(maxSpeed + 1);
		} else {
			System.out.println(maxSpeed);
		}
	}
}
