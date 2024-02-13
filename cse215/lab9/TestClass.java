package lab9;
import java.util.*;

public class TestClass {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		GeometricObject geo[]=new  GeometricObject[6];
		for(int i=0;i<6;i++)
		{
			if(i<3)
			{
				double s1=sc.nextDouble();
				double s2=sc.nextDouble();
				double s3=sc.nextDouble();
				geo[i]=new Triangle(s1,s2,s3);
			}
			else
			{
				double s;
				s=sc.nextDouble();
				
				geo[i]=new Hexagon(s);
				
			}
		}
		double max=geo[0].getArea();
		int ind=0;
		for(int i=0;i<6;i++)
		{
			if(geo[i].getArea()>max)
			{
				max=geo[i].getArea();
				ind=i;
			}
		}
		
			System.out.println("Max Area="+geo[ind].getArea());
			((Drawable)geo[ind]).howToDraw();
		
		

	}

}
