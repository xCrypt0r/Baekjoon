import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int distance = scanner.nextInt();
		scanner.close();
		
		int maxSpeed = distance / 5;
		int restOfDistance = distance % 5;
		
		if(restOfDistance > 0) {
			System.out.println(maxSpeed + 1);
		} else {
			System.out.println(maxSpeed);
		}
	}
}
