package oop;

public class stock {
	private String symbol;
	private String name;
	private double previousClosingPrice;
	private double currentPrice;
	
	public stock(String symbol,String name)
	{
		this.symbol=symbol;
		this.name=name;
	}
	public String getSymbol() {
		return symbol;
	}
	public void setSymbol(String symbol) {
		this.symbol = symbol;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public double getPreviousClosingPrice() {
		return previousClosingPrice;
	}
	public void setPreviousClosingPrice(double previousClosingPrice) {
		
		this.previousClosingPrice = previousClosingPrice;
	}
	public double getCurrentPrice() {
		return currentPrice;
	}
	public void setCurrentPrice(double currentPrice) {
		this.currentPrice = currentPrice;
	}
	public double changePercent()
	{
		return (getCurrentPrice()-getPreviousClosingPrice())/getPreviousClosingPrice();
	}

}
