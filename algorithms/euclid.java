import java.util.Scanner;

public class euclid {
    public static int gcdIterative(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = ob.nextInt();
        int b = ob.nextInt();
        System.out.println("GCD using iteration: " + gcdIterative(a, b));
        ob.close();
    }
}
