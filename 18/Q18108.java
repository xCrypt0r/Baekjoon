import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int buddhaYear = scanner.nextInt();
		scanner.close();
		
		System.out.println(buddhaYear - 543);
	}
}
