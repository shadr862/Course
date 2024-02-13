package oop;

public class teststock {

	public static void main(String[] args) {
		stock st1=new stock("ORCL","Oracle Corporation");
		st1.setPreviousClosingPrice(34.5);
		st1.setCurrentPrice(34.35);
		System.out.println("change="+st1.changePercent());

	}

}