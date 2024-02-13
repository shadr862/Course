package lab9;

public class test {
	public static void main(String[] args) {
		// Display circle and rectangle properties
		displayObject(new CIrcle(1, "red", false));
		displayObject(new Rectangle(1, 1, "black", true));
		}

		

		/** Display geometric object properties */
		public static void displayObject(GeometricObject object) {
		System.out.println("Created on " + object.getDateCreated() + ". Color is " + object.getColor());
		}
		

}
