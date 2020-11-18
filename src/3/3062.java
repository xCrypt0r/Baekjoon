/**
 * 3062. 수 뒤집기
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,320 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int testCase = scanner.nextInt();
		scanner.nextLine();
		
		String[] str = new String[testCase];
		
		for(int i = 0; i < testCase; i++) {
			str[i] = scanner.nextLine();
		}
		scanner.close();

		for(int i = 0; i < testCase; i++) {
			int firstInt = Integer.parseInt(str[i]);
			int secondInt = Integer.parseInt(new StringBuffer(str[i]).reverse().toString());
			
			String resultStr = Integer.toString(firstInt + secondInt);
			StringBuffer resultStrReverse = new StringBuffer(resultStr).reverse();
			
			if (resultStr.contentEquals(resultStrReverse)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
