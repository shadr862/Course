package oop;

public class Rectengle {
	 double width;
    double height;
	
	public Rectengle()
	{
		this.width=1.0;
		this.height=1.0;
	}

	public Rectengle(double width, double height) {
		super();
		this.width = width;
		this.height = height;
	}
	public double getArea()
	{
		return (this.width*this.height);
	}
	public double getperimeter()
	{
		return 2*(this.width+this.height);
	}
	
}
