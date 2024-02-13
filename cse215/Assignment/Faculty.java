package Assignment;

import java.util.Arrays;
import java.util.Date;

public class Faculty {
	private String name;
	private int ID;
	private String address;
	private java.util.Date date_of_birth;
	private String designation;
	private Course[] list_of_course;
	public Faculty() {
		super();
	}
	public Faculty(String name, int iD) {
		super();
		this.name = name;
		ID = iD;
	}
	public Faculty(String name, int iD, String address, Date date_of_birth, String designation) {
		super();
		this.name = name;
		ID = iD;
		this.address = address;
		this.date_of_birth = new java.util.Date();
		this.designation = designation;
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
	public java.util.Date getDate_of_birth() {
		return date_of_birth;
	}
	public String getDesignation() {
		return designation;
	}
	public Course[] getList_of_course() {
		return list_of_course;
	}
	
	public void setList_of_course(Course[] list_of_course) {
		this.list_of_course = list_of_course;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	@Override
	public String toString() {
		return "Faculty [name=" + name + ", ID=" + ID + ", address=" + address + ", date_of_birth=" + date_of_birth
				+ ", designation=" +designation + ", list_of_course=" + Arrays.toString(list_of_course) + "]";
	}
	
	

}
