package mid;
import java.util.Date;
public class account {
	private int id=0;
	private double balance=0;
	private static double annualInterestRate=0;
	private Date dateCreated;
	public account() {
		this.dateCreated = new java.util.Date();
		
	}
	public account(int id, double balance) {
		super();
		this.id = id;
		this.balance = balance;
		
	}

	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public static double getAnnualInterestRate() {
		return annualInterestRate;
	}
	public static void setAnnualInterestRate(double annualInterestRate) {
		account.annualInterestRate = annualInterestRate/100;
	}
	
	
	public Date getDateCreated() {
		return dateCreated;
	}
	public double getMonthlyInterestRate()
	{
		return this.annualInterestRate/12;
	}
	public double getMonthlyInterest()
	{
		return balance*(this.getMonthlyInterestRate());
	}
	public void withdraw(double amount)
	{
		this.balance=this.balance-amount;
	}
	public void deposit(double amount)
	{
		this.balance=this.balance+amount;
	}
	public String toString() {
		return "account [id=" + id + ", balance=" + balance + ", dateCreated=" + dateCreated + "]";
	}


}
