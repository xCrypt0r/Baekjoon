/**
 * 14652. 나는 행복합니다~
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,320 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int row = scanner.nextInt();
		int column = scanner.nextInt();
		int num = scanner.nextInt();
		scanner.close();
		
		System.out.println(num / column + " " + num % column);
	}
}
