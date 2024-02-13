package mid;

public class faculty extends empolyee {
	private String officeHours;
	private String rank;
	public faculty(String name, String address, String number, String email,int office, int salary,String officeHours, String rank) {
		super(name,address,number,email,office,salary);
		this.officeHours = officeHours;
		this.rank = rank;
	}
	public String getOfficeHours() {
		return officeHours;
	}
	public void setOfficeHours(String officeHours) {
		this.officeHours = officeHours;
	}
	public String getRank() {
		return rank;
	}
	public void setRank(String rank) {
		this.rank = rank;
	}
	@Override
	public String toString() {
		return super.toString()+"\nofficeHours"+getOfficeHours()+"\nrank"+getRank();
	}
	


}
