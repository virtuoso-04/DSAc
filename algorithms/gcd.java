import java.util.Scanner;
public class gcd
{
     static int GCD(int a, int b)
    {
        if ( b==0 )
        return a;
        else
        return GCD(b, a%b);
        
    }
        public static void main (String args[])
    {    
        Scanner ob = new Scanner(System.in);
            int p,q=0;
            System.out.println("enter the two numbers ");
            p=ob.nextInt();
            q=ob.nextInt();
            int res=0;
            res=GCD(p,q);
            System.out.println("the GCD of the two numbers are "+res);
    }
}