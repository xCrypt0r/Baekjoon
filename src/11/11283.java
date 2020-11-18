/**
 * 11283. 한글 2
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,232 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 9월 20일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		char hangul;
		
		Scanner scanner = new Scanner(System.in);
		hangul = scanner.nextLine().charAt(0);
		scanner.close();
		
		System.out.println((int)hangul - 44031);
	}
}
