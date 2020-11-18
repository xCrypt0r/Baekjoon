/**
 * 2441. 별 찍기 - 4
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 17,344 KB
 * 소요 시간: 192 ms
 * 해결 날짜: 2020년 9월 22일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) {
				System.out.print(' ');
			}
			
			for(int k = n - i - 1; k >= 0; k--) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
