/**
 * 11382. 꼬마 정민
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,292 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		long[] a = new long[3];
		long sum = 0;
		
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i < 3; i++) {
			a[i] = scanner.nextLong();
		}
		
		scanner.close();
		
		for(int i = 0; i < 3; i++) {
			sum = sum + a[i];
		}
		
		System.out.println(sum);
	}
}
