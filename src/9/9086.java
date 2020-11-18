/**
 * 9086. 문자열
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,268 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2020년 9월 22일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.nextLine();
		
		String[] str = new String[n];
		
		for(int i = 0; i < n; i++) {
			str[i] = scanner.nextLine();
			System.out.println(String.valueOf(str[i].charAt(0))
							 + String.valueOf(str[i].charAt(str[i].length() - 1)));
		}
		scanner.close();
	}
}
