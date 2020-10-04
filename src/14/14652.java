import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int row = scanner.nextInt();
		int column = scanner.nextInt();
		int num = scanner.nextInt();
		scanner.close();
		
		System.out.println(num / column + " " + num % column);
	}
}
