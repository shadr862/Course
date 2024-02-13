package lab7;

public class testpolygon {

	public static void main(String[] args) {
		RegularPolygon obj=new RegularPolygon(6,4);
		obj.getPerimeter();
		obj.getArea();
		System.out.println("Area="+obj.getArea()+"    Perimeter="+obj.getPerimeter());
		RegularPolygon obj1=new RegularPolygon(6,4);
		obj1.getPerimeter();
		obj1.getArea();
		System.out.println("Area="+obj1.getArea()+"    Perimeter="+obj1.getPerimeter());
		RegularPolygon obj2=new RegularPolygon(10,4,5.6,7.8);
		obj2.getPerimeter();
		obj2.getArea();
		System.out.println("Area="+obj2.getArea()+"    Perimeter="+obj2.getPerimeter());
	}
}
