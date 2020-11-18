/**
 * 16170. 오늘의 날짜는?
 * 
 * 작성자: Raccoon Dog
 * 언어: Java 8
 * 사용 메모리: 14,776 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 9월 21일
 */

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
