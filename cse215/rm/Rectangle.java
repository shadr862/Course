package rm;

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
		public double getrArea()
		{
			return (this.width*this.height);
		}
		public double getperimeter()
		{
			return 2*(this.width+this.height);
		}
		public boolean equals(Object obj)
		{
			if(obj instanceof Rectangle)
			{
				if(this.getrArea()==((Rectangle)obj).getrArea())	return  true;
			
			}
			
			return false;
			
		}

}
