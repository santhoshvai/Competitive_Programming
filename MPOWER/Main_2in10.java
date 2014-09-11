import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    
  public static int powerMod(int a, int b, int m) {
        // modular exponentiation: http://goo.gl/ORILn8 "How can we calculate A^B mod C quickly for any B ?"
        if (a < 0 || b < 0 || m <= 0) return -1;    
        if (b == 0) return 1;
        long result = 1;
        long powerMod = a%m;
        while(b > 0)
        {
            if(b%2 == 1) //get the binary numbers one by one in reverse
            {
                result = (result%m * powerMod%m) % m;
            }
            powerMod = ( (powerMod%m) * (powerMod%m) ) % m;
            b /= 2; // right shift once
        }
        return (int)result;     
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        sc.nextInt(); //skip the first line
        int a,b,m;       
        while (sc.hasNext()) {
            a = sc.nextInt();
            b = sc.nextInt();
            m = sc.nextInt();
            System.out.println(powerMod(a,b,m));  
        }
        
        sc.close();
    }
}
