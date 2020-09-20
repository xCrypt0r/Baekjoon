import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int colourNum = scanner.nextInt();
		scanner.close();
		
		System.out.println(colourNum * (colourNum - 1));
	}
}
