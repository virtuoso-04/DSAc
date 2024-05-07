import java.util.Scanner;
public class check {
    public static int gcdContinuousChecking(int a, int b) {
        int gcd = 1;
        for (int i = 1; i <= a && i <= b; ++i) {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        return gcd;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println("GCD using continuous integer checking: " + gcdContinuousChecking(a, b));
        scanner.close();
    }
}
