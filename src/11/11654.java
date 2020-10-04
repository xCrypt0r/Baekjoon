import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		char input;
		
		Scanner scanner = new Scanner(System.in);
		input = scanner.nextLine().charAt(0);
		scanner.close();
		
		System.out.println((int)input);
	}
}
