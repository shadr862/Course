package mid;

public class staff extends empolyee{
	private String title;

	public staff(String name, String address, String number, String email,int office, int salary,String title) {
		super(name,address,number,email,office,salary);
		this.title = title;
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	@Override
	public String toString() {
		return super.toString()+"\ntitle"+getTitle();
	}
	

}
