import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int j = n - i - 2; j >= 0; j--) {
				System.out.print(' ');
			}
			
			for(int k = 0; k < 2 * i + 1; k++) {
				System.out.print('*');
			}
			
			System.out.print('\n');
		}
	}
}
