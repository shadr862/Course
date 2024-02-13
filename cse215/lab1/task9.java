package BasicJava;
import java.util.Scanner;
public class task9 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter weight in pounds: ");
		double pound=sc.nextDouble();
		System.out.print("Enter height in inches: ");
		double inches=sc.nextDouble();
		double BMI,w,h;
		w=pound*0.45359237;
		h=inches*0.0254;
		BMI=w/(h*h);
		System.out.printf("BMI is %.4f ",BMI);
		sc.close();
		

	}

}
