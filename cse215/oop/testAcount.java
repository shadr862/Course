package oop;

public class testAcount {

	public static void main(String[] args) {
		Account myac1=new Account(1122,20000);
		Account.setAnnualInterestRate(4.5);
		myac1.withdraw(2500);
		myac1.deposit(3000);
		System.out.println("balance="+myac1.getBalance());
		System.out.println("monthlyInterest="+myac1.getMonthlyInterest());
		System.out.println("date="+myac1.getDateCreated());

	}

}
