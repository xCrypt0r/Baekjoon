/**
 * 13277. 큰 수 곱셈
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 358,976 KB
 * 소요 시간: 6,696 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		String[] strNum;
		
		Scanner scanner = new Scanner(System.in);
		strNum = scanner.nextLine().split(" ");
		scanner.close();
		
		BigInteger bigOne = new BigInteger(strNum[0]);
		BigInteger bigTwo = new BigInteger(strNum[1]);
		
		System.out.println(bigOne.multiply(bigTwo));
	}
}
