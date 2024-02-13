package Assignment;
import java.util.Scanner;
import java.text.ParseException;
import java.text.SimpleDateFormat;  
import java.util.Date;  
public class ClassManagement {

	public static void main(String[] args)  {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String name;
		int code;
		System.out.println("enter name and code:");
		name=sc.nextLine();
		code=sc.nextInt();
		Course course=new Course(name,code);
		if(course==null)
		{
			System.out.println("not created");
		}
		else
		{
			System.out.println("successfully created");
			
		}
		sc.nextLine();
		int id;
		String address,designation;
		System.out.println("enter the name:");
		String name1=sc.nextLine();
		System.out.println("enter the ID:");
		id=sc.nextInt();
		System.out.println("enter the address:");
		sc.nextLine();
		address=sc.nextLine();
		System.out.println("enter the designation :");
		designation=sc.nextLine();
		Date date1 = new java.util.Date();
		
		Faculty faculty=new Faculty(name1,id,address,date1,designation);
		if(faculty==null)
		{
			System.out.println("not created");
		}
		else
		{
			System.out.println("successfully created");
			
		}
		Student st[]= new Student[40];
		for(int i=0;i<40;i++)
		{
			System.out.println("enter the name:");
			String name11=sc.nextLine();
			System.out.println("enter the ID:");
			id=sc.nextInt();
			System.out.println("enter the address:");
			sc.nextLine();
			address=sc.nextLine();
			Date date2 = new java.util.Date();
			;
			st[i]=new Student(name11,id,address,date2);
		}
		
		course.setList_of_student(st);
		Faculty facultys[]=new Faculty[40];
		for(int i=0;i<40;i++)
		{
			System.out.println("enter the name:");
			String name2=sc.nextLine();
			System.out.println("enter the ID:");
			id=sc.nextInt();
			System.out.println("enter the address:");
			sc.nextLine();
			address=sc.nextLine();
			System.out.println("enter the designation :");
			designation=sc.nextLine();
			Date date2 = new java.util.Date();
			
			facultys[i]=new Faculty(name2,id,address,date2,designation);
			
			
		}
		course.setList_of_faculty(facultys);
		if(course==null)
		{
			System.out.println("not created");
		}
		else
		{
			System.out.println("successfully created");
			
		}
		

	}
}



