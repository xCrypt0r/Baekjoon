/**
 * 2443. 별 찍기 - 6
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 20,592 KB
 * 소요 시간: 224 ms
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
			
			for(int k = 2 * (n - 1) + 1; k > 2 * i; k--) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
