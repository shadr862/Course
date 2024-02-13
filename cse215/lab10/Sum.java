package lab10;
import java.util.*;
public class Sum {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		GeometricObject geo[]=new  GeometricObject[4];
		for(int i=0;i<4;i++)
		{
			if(i<2)
			{
				int r=sc.nextInt();
				geo[i]=new Circle(r);
			}
			else
			{
				double h,w;
				h=sc.nextDouble();
				w=sc.nextDouble();
				geo[i]=new Rectangle(h,w);
				
			}
		}
		double r=sumArea(geo);
	}
	public static double sumArea(GeometricObject[] a)
	{
		double sum=0;
		for(int i=0;i<4;i++)
		{
			sum=sum+a[i].getArea();
		}
		return sum;
		
	}

}
