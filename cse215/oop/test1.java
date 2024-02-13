package oop;

public class test1 {
	public static void main(String[] args)
	{
		Rectengle myrec1=new Rectengle(4,20);
		Rectengle myrec2=new Rectengle(3.5,35.9);
		double r=myrec1.getArea();
		
		
		System.out.println("width="+myrec1.width+"      "+"height="+myrec1.height);
		System.out.println("area="+r);
		System.out.println("perimeter="+myrec1.getperimeter());
		System.out.println("width="+myrec2.width +"     "+"height="+myrec2.height);
		System.out.println("area ="+myrec2.getArea());
		System.out.println("perimeter="+myrec2.getperimeter());
	}

}
