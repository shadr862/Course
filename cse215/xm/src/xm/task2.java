package xm;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.io.File;

public class task2 {
	public static void main(String[] args) throws Exception {
		Scanner input = new Scanner(System.in);
		File file=new File("Scores.txt");
		if(file.exists())
		{
			System.out.println("file already exist");
		    System.exit(1);
		}
		java.io.PrintWriter wrt = new java.io.PrintWriter(file);
		for (int i = 0; i < 100; i++) {
			int r=(int)(Math.random() * 500);
			wrt.println(r);
			
		}
		wrt.close();
		Scanner sc=new Scanner(file);
		ArrayList<Integer> list = new ArrayList<>();
		while (input.hasNext()) {
			list.add(input.nextInt());
		}
		Collections.sort(list);
		System.out.print(list.toString());
		System.out.println();
		
		
	}

		

}
