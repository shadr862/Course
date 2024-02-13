package BasicJava;
import java.util.Scanner;
public class task6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the subtotal and a gratuity rate: ");
		double sub=sc.nextDouble();
		double rate=sc.nextDouble();
		double g=sub*(rate/100);
		double total=sub+g;
		System.out.printf("The gratuity is $"+g+" and total is $"+total);
		sc.close();
		
		

	}

}
