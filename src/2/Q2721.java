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
