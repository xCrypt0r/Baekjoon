/**
 * 18108. 1998년생인 내가 태국에서는 2541년생?!
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,324 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int buddhaYear = scanner.nextInt();
		scanner.close();
		
		System.out.println(buddhaYear - 543);
	}
}
