package xm;
import java.util.Scanner;
import java.io.*;
public class task1 {
	public static void main(String[] args) throws Exception {
		

		
		File file = new File("score1.txt");
		
		if (!file.exists()) {
			System.out.println("File " + file + " does not exist");
			System.exit(1);
		}

		int characters = 0;
		int words = 0;			
		int lines = 0;			

	
			Scanner input = new Scanner(file);
		{
			while (input.hasNext()) {
				lines++;
				String line = input.nextLine();
				characters += line.length();
			}
		}

			Scanner input1 = new Scanner(file);
		 
			while (input1.hasNext()) {
				String line = input1.next();
				words++;
			}

		System.out.println("File " + file.getName() + " has");
		System.out.println(characters + " characters");
		System.out.println(words + " words");
		System.out.println(lines + " lines");
	}
}
