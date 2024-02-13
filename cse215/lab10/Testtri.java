package lab10;
import java.util.*;
public class Testtri {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		double s1,s2,s3;
		s1=sc.nextDouble();
		s2=sc.nextDouble();
		s3=sc.nextDouble();
		String color=sc.next();
		boolean b=sc.nextBoolean();
		Triangle tri=new Triangle(s1,s2,s3,color,b);
		System.out.println(tri.toString());
		

	}

}
