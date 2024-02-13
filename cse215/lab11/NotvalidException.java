package lab11;

public class NotvalidException extends Exception {

	public NotvalidException() {
		super();
		
	}

	public NotvalidException(String message) {
		super(message);
		System.out.println("Exception occure");
	}
	

}
