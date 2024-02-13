package lab10;

public class Square extends GeometricObject implements Colorable {
	private int s;
	

	public Square(int s) {
		super();
		this.s = s;
	}
	

	public int getS() {
		return s;
	}


	public void setS(int s) {
		this.s = s;
	}


	public void howToColor() {
		System.out.println("Color all four sides.");
		
	}

	@Override
	public double getArea() {
		// TODO Auto-generated method stub
		return s*s;
	}

	@Override
	public double getPerimeter() {
		// TODO Auto-generated method stub
		return 4*s;
	}

}
