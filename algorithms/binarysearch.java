import java.util.Arrays;
import java.util.Scanner;

public class binarysearch {
    
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);

        System.out.println("Enter the limit of the array:");
        int n = ob.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = ob.nextInt();
        }

        // Sorting the array as binary search requires a sorted array
        Arrays.sort(arr);

        System.out.println("Enter the element to search:");
        int key = ob.nextInt();

        // Record start time
        long startTime = System.nanoTime();
        
        // Perform binary search
        int result = binarySearch(arr, 0, n - 1, key);

        // Record end time
        long endTime = System.nanoTime();

        // Calculate duration
        long duration = endTime - startTime;

        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found in the array.");
        }

        System.out.println("Time taken for search (in nanoseconds): " + duration);
        System.out.println("Time complexity is O(log n), where n is the number of elements in the array.");

        ob.close();
    }
    
    private static int binarySearch(int[] arr, int low, int high, int key) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == key) {
                return mid;
            }
            if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
}
