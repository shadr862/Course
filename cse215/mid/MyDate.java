package mid;
import java.util.GregorianCalendar;
public class MyDate {
	private int year;
	private int month;
	private int day;

	
	MyDate() {
		GregorianCalendar calander = new GregorianCalendar();
		year = calander.get(GregorianCalendar.YEAR);
		month = calander.get(GregorianCalendar.MONTH);
		day = calander.get(GregorianCalendar.DAY_OF_MONTH);
	}

	
	MyDate(long elapsedTime) {
		setDate(elapsedTime);
	}

	
	MyDate(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}


	public int getYear() {
		return year;
	}

	
	public String getMonth() {
		String m = String.valueOf(month);
		return m;
	}

	
	public String getDay() {
		String d = String.valueOf(day);
		return d;
	}

	
	public void setDate(long elapsedTime) {
		GregorianCalendar calander = new GregorianCalendar();
		calander.setTimeInMillis(elapsedTime);
		year = calander.get(GregorianCalendar.YEAR);
		month = calander.get(GregorianCalendar.MONTH);
		day = calander.get(GregorianCalendar.DAY_OF_MONTH);
	} 

}
