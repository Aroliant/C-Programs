public class palindrome {

    public static void main(String []args) {
    	String a,b="";
    	a="MALAYALAM";
    	int len=a.length();
    	
    	
    	for(int i=len-1;i>=0;i--)
    	{
 		b=b+a.charAt(i);    		
    	}
    	if(a.equals(b))
    	{
    		System.out.println("It is a Palindrome");
    	}
    	else{
    		System.out.println("It is not a Palindrome");
    	}
    }     
} 

