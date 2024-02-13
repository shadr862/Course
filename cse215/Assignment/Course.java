package Assignment;

import java.util.Arrays;

public class Course {
	private String name;
	private int code;
	private Student[] list_of_student;
	private Faculty[] list_of_faculty;
	public Course() {
		super();
	}
	public Course(String name, int code) {
		super();
		this.name = name;
		this.code = code;
	}
	public Course(String name, int code, Student[] list_of_student, Faculty[] list_of_faculty) {
		super();
		this.name = name;
		this.code = code;
		this.list_of_student = list_of_student;
		this.list_of_faculty = list_of_faculty;
	}
public void setList_of_student(Student[] student) {
		this.list_of_student = student;
	}
	public void setList_of_faculty(Faculty[] list_of_faculty) {
		this.list_of_faculty = list_of_faculty;
	}
	@Override
	public String toString() {
		return "Course [name=" + name + ", code=" + code + ", list_of_student=" + Arrays.toString(list_of_student)
				+ ", list_of_faculty=" + Arrays.toString(list_of_faculty) + "]";
	}
	
	
	

}
