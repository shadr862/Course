package xm;
import java.util.*;
public class ArrayIndexOutOfBoundsException {
	public static void main(String[] args) {

        int array[]=new int[100];
        for (int i = 0; i < array.length; i++) {
            array[i] = (int) (Math.random() * 100);
        }
        Scanner input = new Scanner(System.in);
        System.out.print("Enter an index: ");
        try {
            int index = input.nextInt();
            System.out.println (array[index]);
        } catch (IndexOutOfBoundsException ex) {
            System.out.println(" index out of bounds");
        } catch (Exception ex) {
            System.out.println("INVALID INPUT");
        }
    }
}
