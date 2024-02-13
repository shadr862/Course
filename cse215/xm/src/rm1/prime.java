package rm1;
import java.util.*;
public class prime {
	public static void generateprime(int start,int end)
	{
		System.out.printf("prime number between %d to %d are:\n",start,end);
	    int i;
	    for( i=start;i<=end;i++)
	    {
	        if(isprime(i)){
	        	System.out.printf("%d ",i);
	            
	        }
	    }
	
	}
	public static boolean isprime(int n)
	{
	    int j;
	    boolean flag=true;
	    if(n==1)
	    {
	    	flag=false;
	    }
	        
	    for(j=2;j<=n/2;j++)
	    {
	        if(n%j==0)
	        {
	             flag=false;
	        break;
	        }

	    }
	    return flag;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("enter two num start to end:");
		int s=input.nextInt();
		int e=input.nextInt();
		generateprime(s,e);


	

	}
	
}
