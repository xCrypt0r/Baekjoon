import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = n - i - 1; j > 0; j--) {
				System.out.print(' ');
			}
			
			for(int k = 0; k < 2 * i + 1; k++) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
		
		for(int i = 1; i < n; i++) {
			for(int j = 0; j < i; j++) {
				System.out.print(' ');
			}
			
			for(int k = 2 * (n - 1) + 1; k > 2 * i; k--) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
