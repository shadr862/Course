package BasicJava;
import java.util.Scanner;
public class task8 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter speed and acceleration: ");
		double s=sc.nextDouble();
		double a=sc.nextDouble();
		double l=(s*s)/(2*a);
		System.out.printf("The minimum runway length for this airplane is %.3f ",l);
		sc.close();
		
		

	}

}