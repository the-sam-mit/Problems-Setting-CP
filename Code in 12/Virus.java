import java.math.*; 
import java.util.Scanner; 
  
public class Main { 
    public static void main(String[] args)throws java.lang.Exception{ 
        BigInteger b1, b2, res; 
  		Scanner sc =new Scanner(System.in);
        b1 = sc.nextBigInteger(); 
        b2 = new BigInteger("1000000007"); 
        BigInteger exponent = sc.nextBigInteger();; 
  		res = b1.modPow(exponent, b2); 
  		System.out.println(res); 
  }
}