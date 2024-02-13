package mid;

public class test {
	public static void main(String[] args)
	{
		person Person = new person("John", "12 Bell street", 
				"3473339999", "john12@aol.com");

			Student student = new Student("Mary", "100 Town Ave", "5149993333", 
				"mary100@aol.com", Student.FRESHMAN);

			empolyee Employee = new empolyee("Mike", "34 West street", "6189999999",
				"mike80@aol.com", 910, 60000);

			faculty Faculty = new faculty("Sue", "28 Well street", "4133333333",
				"sue28@aol.com", 101, 50000, "4pm to 6pm", "Professor");

			staff Staff = new staff("Tom", "90 Country road", "2030000000",
				"tomcat@aol.com", 12, 65000, "Executive Assistant");
			System.out.println(Person.toString());
			System.out.println(student.toString());
			System.out.println(Employee.toString());
			System.out.println(Faculty.toString());
			System.out.println(Staff.toString());
	}

}
