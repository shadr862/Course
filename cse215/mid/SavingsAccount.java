
package mid;

public class SavingsAccount extends account {

	public SavingsAccount(int id, double balance) {
		super(id, balance);
		
	}
	public void withdraw(double amount) {
		if (amount < getBalance()) {
			setBalance(getBalance() - amount);
		}
		else
		{
			System.out.println("Error! Savings account overdrawn transtaction rejected");
		}
		

	}
}
