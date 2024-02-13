package lab10;
import java.util.*;
public class TestCircle {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int r=sc.nextInt();
		String color=sc.next();
		boolean b=sc.nextBoolean();
		Circle c1=new Circle(r,color,b);
		Circle c2=new Circle(r,color,b);
		
		System.out.println(c1.Compareable(c2));
		System.out.println(c1.equals(c2));
		
		
		
	}
	


}
