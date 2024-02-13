package lab11;
import java.util.Scanner;

public class File {

	

	public static void main(String[] args) throws Exception
	{
		java.io.File file=new java.io.File("Scores.txt");
		if(file.exists())
		{
			System.out.println("file already exist");
			System.exit(1);
		}
		java.io.PrintWriter wrt = new java.io.PrintWriter(file);
		wrt.print("Jhon Doe ");
		wrt.println(90);
		wrt.print("David Adamds ");
		wrt.println(70);
		wrt.close();
		Scanner sc=new Scanner(file);
		while(sc.hasNext())
		{
			
			String name1=sc.next();
			String name2=sc.next();
		
			int score=sc.nextInt();
			
			System.out.println(name1+" "+name2+" "+score);
		}
		sc.close();
	}
	
	

}
