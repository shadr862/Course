package rm;

public class task1 {
	public static void main(String[] args) {
		double sum=0;
		for(int i=2;i<=625;i++)
		{
			sum=sum+Math.sqrt(1.0/i);
		}
		System.out.println(sum);
	}

}
