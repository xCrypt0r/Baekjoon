/**
 * 2721. 삼각수의 합
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 18,076 KB
 * 소요 시간: 244 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int t = scanner.nextInt();
		long[] testCase = new long[t];
		
		for(int i = 0; i < t; i++) {
			testCase[i] = scanner.nextInt();
		}
		
		scanner.close();
		
		for(int i = 0; i < t; i++) {
			System.out.println(Weight(testCase[i]));
		}
	}
	
	static long Weight(long k) {
		long result = 0;
		
		for(long i = 1; i <= k; i++) {
			result += i * TriangularNum(i + 1);
		}
		
		return result;
	}
	
	static long TriangularNum(long k) {
		if(k == 1) {
			return 1;
		}
		
		return k + TriangularNum(k - 1);
	}
}
