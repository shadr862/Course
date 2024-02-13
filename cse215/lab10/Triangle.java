package lab10;

public class Triangle extends GeometricObject {
	private double s1;
	private double s2;
	private double s3;
	public Triangle() {
		super();
	}
	public Triangle(double s1,double s2,double s3,String color, boolean filled) {
		super(color, filled);
		this.s1=s1;
		this.s2=s2;
		this.s3=s3;
	}
	@Override
	public double getArea() {
		double s=(s1+s2+s3)/2;
		double area=Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
		return area;
	}
	@Override
	public double getPerimeter() {
		// TODO Auto-generated method stub
		return s1+s2+s3;
	}
	@Override
	public String toString() {
		return super.toString()+"Triangle [s1=" + s1 + ", s2=" + s2 + ", s3=" + s3 + "]";
	}
	
	
	

}
