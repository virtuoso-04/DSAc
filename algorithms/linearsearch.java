import java.util.Scanner;

public class linearsearch {   
    int n = 0;
    int[] arr;
    
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        linearsearch ls = new linearsearch();
        
        System.out.println("Enter the limit of the array:");
        ls.n = ob.nextInt();
        ls.arr = new int[ls.n];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < ls.n; i++) {
            ls.arr[i] = ob.nextInt();
        }
        
        System.out.println("Enter the element to search:");
        int ele = ob.nextInt();
        
        long startTime = System.nanoTime();
        int result = ls.linear1(ele);
        long endTime = System.nanoTime();
        
        if (result == -1) {
            System.out.println("Element found in the array.");
        } else {
            System.out.println("Element not found in the array.");
        }
        
        long duration = endTime - startTime;
        System.out.println("Time taken for search (in nanoseconds): " + duration);
        System.out.println("Time complexity is O(n), where n is the number of elements in the array.");
        
        ob.close();
    }
    
    int linear1(int ele) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == ele) {
                return -1; // Element found
            }
        }
        return 0; // Element not found
    }
}
