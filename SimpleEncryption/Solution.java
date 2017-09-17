import java.util.Scanner;

public class code {
	
private static final String CONSONANTS = "bcdfghjklmnpqrstvwxyz";
private static final String VOWELS="aeiou";
private static final String NUMBERS="1234567890";
private static final String ALPHA="abcdefghij";

	private static void encrypt(String input) {
		input=input.replaceAll(" ", "*");
	    char[] chars = input.toLowerCase().toCharArray();
	    for (int i = 0; i < chars.length; i++) {
	        int idx = CONSONANTS.indexOf(chars[i]);
	        int idx1=VOWELS.indexOf(chars[i]);
	        int numindex=NUMBERS.indexOf(chars[i]);
	        
	        if (idx != -1)
	            chars[i] = CONSONANTS.charAt((idx + 1) % CONSONANTS.length());
	        else if(idx1 !=-1)      	
	        	chars[i]=NUMBERS.charAt(idx1);
	        else if(numindex != -1 )
	        	chars[i]=ALPHA.charAt(numindex);
     	
	    }
	    System.out.println(chars);
	   // return new String(chars);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter input string");
		String s=in.nextLine();
		encrypt(s);

	}

}


