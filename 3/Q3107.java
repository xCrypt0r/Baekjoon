import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String ipStr = scanner.nextLine();
		scanner.close();
		
		Pattern p = Pattern.compile("[^:]{1,4}");
		
		ipStr = zeroFill(p, ipStr);
		
		System.out.println(addrWithZero(p, ipStr));
	}
	
	public static String zeroFill(Pattern p, String str) {
		Matcher m = p.matcher(str);
		int addrCount = 0;
		
		while (m.find()) {
			addrCount++;
		}
		
		String zeros = ":";
		
		for (int i = 0; i < 8 - addrCount; i++) {
			zeros += "0000:";
		}
		
		str = str.replace("::", zeros).replaceAll("^:|:$", "");
		
		return str;
	}
	
	public static String addrWithZero(Pattern p, String str) {
		String strWithZero = new String("");
		Matcher m = p.matcher(str);
		
		while(m.find()){
			int Dec = Integer.parseInt(m.group(0), 16);
			String fillZero = String.format("%04x", Dec);
			strWithZero += fillZero + ":";
		}
		
		strWithZero = strWithZero.replaceAll(":$", "");
		
		return strWithZero;
	}
}
