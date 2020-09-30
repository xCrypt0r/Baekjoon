import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		char hangul;
		
		Scanner scanner = new Scanner(System.in);
		hangul = scanner.nextLine().charAt(0);
		scanner.close();
		
		System.out.println((int)hangul - 44031);
	}
}
