package lab10;

import rm.Rectangle;

public class Circle extends GeometricObject implements Compareable {
	private int radius;
	
	public Circle(int radius) {
		super();
		this.radius = radius;
	}


	public Circle(int radius,String color, boolean filled) {
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
	public  int Compareable(Object o)
	{
		if(this.getArea()>((Circle)o).getArea())
		{
			return 1;
		}
		else if(this.getArea()<((Circle)o).getArea())
		{
			return -1;
		}
		
		return 0;
	}
	public boolean equals(Object obj)
	{
		if(obj instanceof Circle)
		{
			if(this.getArea()==((Circle)obj).getArea())	return  true;
		
		}
		
		return false;
		
	}

}
