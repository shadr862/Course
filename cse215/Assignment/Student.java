package Assignment;

import java.util.Date;

public class Student {
	private String name;
	private int ID;
	private String address;
	private double cgpa;
	private java.util.Date date_of_birth;
	public Student() {
		super();
	}
	public Student(String name, int iD) {
		super();
		this.name = name;
		ID = iD;
	}
	public Student(String name, int iD, String address, Date date_of_birth) {
		super();
		this.name = name;
		ID = iD;
		this.address = address;
		this.date_of_birth = new java.util.Date();
	}
	public String getName() {
		return name;
	}
	public int getID() {
		return ID;
	}
	public String getAddress() {
		return address;
	}
	public double getCgpa() {
		return cgpa;
	}
	public java.util.Date getDate_of_birth() {
		return date_of_birth;
	}
	
	public void setAddress(String address) {
		this.address = address;
	}
	@Override
	public String toString() {
		return "Student [name=" + name + ", ID=" + ID + ", address=" + address + ", cgpa=" + cgpa + ", date_of_birth="
				+ date_of_birth + "]";
	}
	
	
	

}
