package lab9;

public class Hexagon  extends GeometricObject implements Drawable {
  private double s;
  
  public Hexagon() {
	super();
}
  
public Hexagon(double s) {
	super();
	this.s = s;
}

public Hexagon(double s,String color, boolean filled) {
		super(color, filled);
		this.s=s;
		// TODO Auto-generated constructor stub
	}

public double getArea() {
	double area=((3.0*Math.sqrt(2))/2.0)*s*s;
	return area;
}

@Override
public double getPerimeter() {
	// TODO Auto-generated method stub
	return s*6;
}


public String toString() {
	// TODO Auto-generated method stub
	return super.toString()+"side="+s;
}

public void howToDraw() {
		System.out.println("Draw all the sides.");

	}



  
}
