package lab7;

public class RegularPolygon {
	private int n;
	private double side;
	private double x;
	private double y;
	

	public RegularPolygon() {
		this.n=3;
		this.side=1;
		this.x=0;
		this.y=0;
		
	}
	public RegularPolygon(int n, double side) {
		super();
		this.n = n;
		this.side = side;
	}
	public RegularPolygon(int n, double side, double x, double y) {
		super();
		this.n = n;
		this.side = side;
		this.x = x;
		this.y = y;
	}
	public int getN() {
		return n;
	}
	public void setN(int n) {
		this.n = n;
	}
	public double getSide() {
		return side;
	}
	public void setSide(double side) {
		this.side = side;
	}
	public double getX() {
		return x;
	}
	public void setX(double x) {
		this.x = x;
	}
	public double getY() {
		return y;
	}
	public void setY(double y) {
		this.y = y;
	}
	public double getPerimeter()
	{
		return this.n*this.side;
	}
	public double getArea()
	{
		double area;
		area=(this.n*(this.side*this.side))/(4*Math.tan(Math.PI/this.n));
		return area;
	}
	

}
