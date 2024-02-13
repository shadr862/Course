package mid;

public class empolyee extends person{
	private int office;
	private int salary;
	private MyDate dateHired;
	public empolyee() {
		super();
	}
	public empolyee(String name, String address, String number, String email,int office, int salary) {
		super(name,address,number,email);
		this.office = office;
		this.salary = salary;
		dateHired=new MyDate();
	}
	
	public String getDateHired() {
		return dateHired.getDay()+"/"+dateHired.getMonth()+"/"+dateHired.getYear();
	}
	public void setDateHired(MyDate dateHired) {
		this.dateHired = dateHired;
	}
	public int getOffice() {
		return office;
	}
	public void setOffice(int office) {
		this.office = office;
	}
	public int getSalary() {
		return salary;
	}
	public void setSalary(int salary) {
		this.salary = salary;
	}
	@Override
	public String toString() {
		return super.toString()+"\noffice="+office+"\nsalary="+salary+"\ndateHired="+getDateHired();
	}
	
	

}
