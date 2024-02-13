package oop;
import java.util.Scanner;
public class testoctagon {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int x=4,i;
		
		Octagon[] obj=new Octagon[4];
		
		for(i=0;i<4;i++)
		{
			
			System.out.println("enter the side:");
			double s=sc.nextDouble();
			obj[i]=new Octagon(s);
		}
		double max=obj[0].getArea(),ind=0;
		for(i=0;i<4;i++)
		{
			if(max<obj[i].getArea())
			{
				max=obj[i].getArea();
				ind=i;
				
			}
			
		}
		
		System.out.println("Area="+max+"  side"+obj[(int)ind].getSide());
		
	}

}
