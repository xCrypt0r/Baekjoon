/**
 * 2444. 별 찍기 - 7
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 21,672 KB
 * 소요 시간: 304 ms
 * 해결 날짜: 2020년 9월 22일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = n - i - 1; j > 0; j--) {
				System.out.print(' ');
			}
			
			for(int k = 0; k < 2 * i + 1; k++) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
		
		for(int i = 1; i < n; i++) {
			for(int j = 0; j < i; j++) {
				System.out.print(' ');
			}
			
			for(int k = 2 * (n - 1) + 1; k > 2 * i; k--) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
