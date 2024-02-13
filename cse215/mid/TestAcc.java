package mid;

public class TestAcc {
	public static void main(String[] args)
	{
		account Account = new account(1122, 30000);
		SavingsAccount savings = new SavingsAccount(1001, 40000);
		CheckingAccount checking = new CheckingAccount(1004, 50000, -20);
		
		Account.setAnnualInterestRate(4.5);
		savings.setAnnualInterestRate(6.5);
		checking.setAnnualInterestRate(7.5);

		
		Account.withdraw(2500);
		savings.withdraw(2500);
		checking.withdraw(2500);

		
		Account.deposit(3000);
		savings.deposit(3000);
		checking.deposit(3000);

		System.out.println(Account.toString());
		System.out.println(savings.toString());
		System.out.println(checking.toString());
	}

}
