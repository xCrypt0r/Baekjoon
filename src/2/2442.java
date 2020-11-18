/**
 * 2442. 별 찍기 - 5
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 20,620 KB
 * 소요 시간: 252 ms
 * 해결 날짜: 2020년 9월 22일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = n - i - 2; j >= 0; j--) {
				System.out.print(' ');
			}
			
			for(int k = 0; k < 2 * i + 1; k++) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
