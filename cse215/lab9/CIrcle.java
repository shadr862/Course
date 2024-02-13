package lab9;

public class CIrcle extends GeometricObject {
private int radius;
	
	public CIrcle(int radius) {
		super();
		this.radius = radius;
	}


	public CIrcle(int radius,String color, boolean filled) {
		super(color, filled);
		this.radius=radius;
		
	}
	

	public int getRadius() {
		return radius;
	}


	public void setRadius(int radius) {
		this.radius = radius;
	}

	@Override
	public double getArea() {
		// TODO Auto-generated method stub
		return Math.PI*radius*radius;
	}

	@Override
	public double getPerimeter() {
		// TODO Auto-generated method stub
		return 2*Math.PI*radius;
	}

}
