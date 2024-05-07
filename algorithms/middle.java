import java.util.Scanner;
public class middle {
    public static int gcdMiddleSchool(int a, int b) {
        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println("GCD using middle school procedure: " + gcdMiddleSchool(a, b));
        scanner.close();
    }
}
