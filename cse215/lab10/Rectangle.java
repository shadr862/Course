package lab10;


	public class Rectangle extends GeometricObject{
		 double width;
		    double height;
			
			public Rectangle()
			{
				this.width=1.0;
				this.height=1.0;
			}

			public Rectangle(double width, double height) {
				super();
				this.width = width;
				this.height = height;
			}
			public double getArea()
			{
				return (this.width*this.height);
			}
			public double getPerimeter()
			{
				return 2*(this.width+this.height);
			}
			public boolean equals(Object obj)
			{
				if(obj instanceof Rectangle)
				{
					if(this.getArea()==((Rectangle)obj).getArea())	return  true;
				
				}
				
				return false;
				
			}
	}


