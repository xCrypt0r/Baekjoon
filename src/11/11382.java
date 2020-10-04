import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		long[] a = new long[3];
		long sum = 0;
		
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i < 3; i++) {
			a[i] = scanner.nextLong();
		}
		
		scanner.close();
		
		for(int i = 0; i < 3; i++) {
			sum = sum + a[i];
		}
		
		System.out.println(sum);
	}
}
