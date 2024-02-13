package oop;

public class Octagon {
	private double side ;
	public static int numberOfOctagon;
	public Octagon() {
		super();
	}
	public Octagon(double side) {
		super();
		this.side = side;
	}
	public double getSide() {
		return side;
	}
	public void setSide(double side) {
		this.side = side;
	}
	
	
	public static int getNumberOfOctagon() {
		return numberOfOctagon;
	}
	public static void setNumberOfOctagon(int numberOfOctagon) {
		Octagon.numberOfOctagon = numberOfOctagon;
	}
	public double getArea()
	{
		double r=(2.0+4.0/Math.sqrt(2))*side*side;
		return r;
	}
	public double getPerimeter()
	{
		return side*8;
	}

}
