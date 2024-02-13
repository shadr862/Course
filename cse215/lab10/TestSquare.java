package lab10;
import java.util.*;
public class TestSquare {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int s;
		
		 GeometricObject geo[]=new  GeometricObject[5];
		 for(int i=0;i<5;i++)
		 {
			 s=sc.nextInt();
			 geo[i]=new Square(s);
			 System.out.println(geo[i].getArea());
			((Square)geo[i]).howToColor();
			 
		 }

	}
	

}
