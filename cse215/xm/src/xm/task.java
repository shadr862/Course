package xm;
import java.util.Scanner;
import java.io.File;

public class task {
	public static void main(String[] args) throws Exception {
		Scanner input = new Scanner(System.in);

		// Prompt the user to a file
		System.out.print("Enter a file of scores: ");
		File file = new File(input.nextLine());

		// Check if file exists
		if (!file.exists()) {
			System.out.println("File " + file + " does not exist");
			System.exit(1);
		}
		int count = 0; 		// Counts scores
		double total = 0;	// Accumulates total

		
			Scanner inputFile = new Scanner(file);
		 
			while (inputFile.hasNext()) {
				total += inputFile.nextInt();
				count++;
			}
			inputFile.close();

		
		System.out.println("File " + file.getName());
		System.out.println("Total scores: " + total);
		System.out.println("Average scores: " + (total / count));
    }

}
