package Lab3;
import java.util.*;
public class task1 {
     public static void main(String[] args) {
    	 Scanner input=new Scanner(System.in);
    	 System.out.print("Enter an integer, the input ends if it is 0:");
    	 int p=0,n=0,t=0;
    	 double avg;
    	 while(true)
    	 {
    		 int num=input.nextInt();
    		 if(num==0)
    		 {
    			 break;
    		 }
    		 else if(num>0)
    		 {
    			 t=t+num;
    			 p++;
    		 }
    		 else if(num<0)
    		 {
    			 t=t+num;
    			 n++;
    		 }
    	 }
    	 avg=(double)t/(p+n);
    	 System.out.println("The number of positives is "+p);
    	 System.out.println("The number of negatives is "+n);
    	 System.out.println("The total is "+t);
    	 System.out.println("The average is "+avg);
    	 input.close();
		

	}
}
