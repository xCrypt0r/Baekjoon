/**
 * 2738. 행렬 덧셈
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 32,868 KB
 * 소요 시간: 408 ms
 * 해결 날짜: 2020년 9월 21일
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		
		int[][] matrixA = new int[n][m];
		int[][] matrixB = new int[n][m];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				matrixA[i][j] = scanner.nextInt();
			}
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				matrixB[i][j] = scanner.nextInt();
			}
		}
		
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				System.out.print(matrixA[i][j] + matrixB[i][j] + " ");
			}
			
			System.out.print("\n");
		}
	}
}
