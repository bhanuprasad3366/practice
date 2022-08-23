import java.io.FileInputStream;
import java.io.InputStream; 

public class files {
	public static void main(String args[]) throws Exception {
		byte[] array = new byte[100];
		try {
			InputStream input = new FileInputStream("input.txt"); 
			System.out.println("Available bytes in the file: "+input.available()); 
			input.read(array); 
			String data = new String(array); 
			System.out.println("Data read from the file: "+data); 
		} catch(Exception e) {
			e.getStackTrace(); 
		}
	}
}
