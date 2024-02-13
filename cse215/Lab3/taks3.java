package Lab3;

public class taks3 {

	public static void main(String[] args) {
		int i,c=0;
		for(i=100;i<=200;i++)
		{
			if(c<=10)
			{
				if((i%5==0)||(i%6==0)&&((i%5)!=(i%6)))
				{
					 System.out.print(" "+i);
					 c++;	 
				}
			}
			else
			{
				System.out.println();
				c=0;
			}
			
		}
	}

}
