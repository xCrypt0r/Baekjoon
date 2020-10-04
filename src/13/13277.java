import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		String[] strNum;
		
		Scanner scanner = new Scanner(System.in);
		strNum = scanner.nextLine().split(" ");
		scanner.close();
		
		BigInteger bigOne = new BigInteger(strNum[0]);
		BigInteger bigTwo = new BigInteger(strNum[1]);
		
		System.out.println(bigOne.multiply(bigTwo));
	}
}
