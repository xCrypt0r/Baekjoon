import java.time.LocalDate;

public class Main {
	public static void main(String[] args) {
		LocalDate time = LocalDate.now();
		
		int year = time.getYear();
		String month = String.format("%02d", time.getMonthValue());
		int dayOfMonth = time.getDayOfMonth();
		
		System.out.println(year + "\n" + month + "\n" + dayOfMonth);
	}
}
