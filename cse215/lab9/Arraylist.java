package lab9;
import java.util.ArrayList;
public class Arraylist {
	public static void main(String[] args) {
		ArrayList<Object> o = new ArrayList<Object>();
		o.add(new CIrcle(5));
		o.add(new Rectangle());
		
	
	for (int i = 0; i < o.size(); i++) {
		System.out.println(((o.get(i)).toString()));
	}

}
}
