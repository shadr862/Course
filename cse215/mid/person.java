package mid;

public class person {
	private String name;
	private String Address;
	private String number;
	private String email;
	public person() {
		super();
	}
	public person(String name, String address, String number, String email) {
		super();
		this.name = name;
		Address = address;
		this.number = number;
		this.email = email;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAddress() {
		return Address;
	}
	public void setAddress(String address) {
		Address = address;
	}
	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	@Override
	public String toString() {
		return "\nname=" + name + "\nAddress=" + Address + "\nnumber=" + number + "\nemail=" + email ;
	}
	

}
