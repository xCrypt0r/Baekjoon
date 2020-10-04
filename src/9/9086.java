import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.nextLine();
		
		String[] str = new String[n];
		
		for(int i = 0; i < n; i++) {
			str[i] = scanner.nextLine();
			System.out.println(String.valueOf(str[i].charAt(0))
							 + String.valueOf(str[i].charAt(str[i].length() - 1)));
		}
		scanner.close();
	}
}
