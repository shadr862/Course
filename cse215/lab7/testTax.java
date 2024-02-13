package lab7;

public class testTax {
	public static void main(String[] args) {
		
		Tax tax2001 = new Tax();
		Tax tax2009 = new Tax();

	
		double[] rates2001 = {15, 27.5, 30.5, 35.5, 39.1};
		tax2001.setRates(rates2001);

	
		int[][] brackets2001 = {
			{27050, 65550, 136750, 297350},  
			{45200, 109250, 166500, 297350}, 
														
			{22600, 54625, 83250, 148675},  
			{36250, 93650, 151650, 297350} 	
		};
		tax2001.setBrackets(brackets2001);

		
		final double FROM = 50000;		
		final double TO = 60000;		
		final double INTERVAL = 1000;	

		System.out.println("\n2001 tax tables for taxable income from $50,000 to $60,000");
		print(tax2001, FROM, TO, INTERVAL);

		System.out.println("\n2009 tax tables for taxable income from $50,000 to $60,000");
		print(tax2009, FROM, TO, INTERVAL);
		
	}

	public static void print(Tax tax, double from, double to, double interval) {
		
		System.out.println(
				"---------------------------------------------------------------------\n" +
				"Taxable       Single      Married Joint       Married        Head of\n" +
				"Income                    or Qualifying       Separate       a House\n" +
				"                          Widow(er)\n" +
				"---------------------------------------------------------------------");
			
			for (double taxableIncome = from; 
				  taxableIncome <= to; taxableIncome += interval) {
				tax.setTaxableIncome(taxableIncome);
				System.out.printf("%-13.0f", taxableIncome);
				tax.setFilingStatus(tax.SINGLE_FILER);
				System.out.printf("%8.2f", tax.getTax());
				tax.setFilingStatus(tax.MARRIED_JOINTLY_OR_QUALIFYING_WIDOWER);
				System.out.printf("%15.2f", tax.getTax());
				tax.setFilingStatus(tax.MARRIED_SEPARATELY);
				System.out.printf("%18.2f", tax.getTax());
				tax.setFilingStatus(tax.HEAD_OF_HOUSEHOLD);
				System.out.printf("%15.2f\n", tax.getTax());
		}
	}
}


