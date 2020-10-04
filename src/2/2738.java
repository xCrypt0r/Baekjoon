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
