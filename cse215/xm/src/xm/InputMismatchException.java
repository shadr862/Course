package xm;
import java.util.*;
public class InputMismatchException {
	public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
        int n1 = 0;
        int n2 = 0;
        while(true) {
            System.out.print("Please enter in 2 integers to get their sum: ");        
            try {
                n1 = in.nextInt();
                n2 = in.nextInt();
                
                break;
            } 
            catch (java.util.InputMismatchException ime) {
               System.out.printf("You must enter 2 integers!%n%n");
               in.nextLine(); 
            }
            
        } 
        System.out.printf("The sum is %d%n", (n1+n2));
    }

}
