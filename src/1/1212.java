/**
 * 1212. 8진수 2진수
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 42,856 KB
 * 소요 시간: 612 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String octStr = scanner.nextLine();
		scanner.close();
		
		StringBuffer binStrBf = new StringBuffer();
		int parseOct = 0;
		
		for (int i = 0; i < octStr.length(); i++) {
			parseOct = Integer.parseInt(String.valueOf(octStr.charAt(i)));
			
			for (int j = 2; j >= 0; j--) {
				if (Math.pow(2, j) <= parseOct) {
					binStrBf = binStrBf.append("1");
					parseOct = (int) (parseOct % Math.pow(2, j));
				} else {
					binStrBf = binStrBf.append("0");
				}
			}
		}
		
		while (binStrBf.charAt(0) != '1' && binStrBf.length() != 1) {
			binStrBf = binStrBf.deleteCharAt(0);
		}

		System.out.println(binStrBf);
	}
}
