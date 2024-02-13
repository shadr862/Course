package BasicJava;
import java.util.Scanner;
public class task7 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the amount of water in kilograms: ");
		double M=sc.nextDouble();
		System.out.print("Enter the initial temperature: ");
		double t1=sc.nextDouble();
		System.out.print("Enter the final temperature: ");
		double t2=sc.nextDouble();
		double e=M*(t2-t1)*4184;
		System.out.printf("The energy needed is %.1f",e);
		sc.close();
		
		

	}

}

