package lab7;
public class testmyclass {
	public static void main(String[] args) {
		Triangle2d t1=new Triangle2d(new MyPoint(2.5, 2), new MyPoint(4.2,3), new MyPoint(5, 3.5));
		System.out.println("Area is " + t1.getArea());
        System.out.println("Perimeter is " + t1.getPerimeter());
        System.out.println("Point is inside triangle: " + t1.contains(3, 3));
        System.out.println("Triangle 2 is inside this triangle: " +t1.contains(new Triangle2d(new MyPoint(2.9, 2), new MyPoint(4, 1),new MyPoint(1, 3.4))));
        System.out.println("Triangle 3 is overlaps this triangle: " +t1.overlaps(new Triangle2d(new MyPoint(2, 5.5), new MyPoint(4, -3),new MyPoint(2, 6.5))));
	}

	
}
