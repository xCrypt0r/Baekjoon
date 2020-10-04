import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		
		for(int i = 0; i < n; i++) {
			for(int k = n - i - 1; k >= 0; k--) {
				System.out.print('*');
			}
			
			System.out.print("\n");
		}
	}
}
