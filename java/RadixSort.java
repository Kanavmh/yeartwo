public class RadixSort {    
    public static void countingSort(int[] arr, int exp) {
        int n = arr.length;
        int[] output = new int[n];
        int[] count = new int[10];

        for (int i = 0; i < n; i++) {
            int index = arr[i] / exp;
            count[index % 10]++;
        }
    
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
    
        int i = n - 1;
        while (i >= 0) {
            int index = arr[i] / exp;
            output[count[index % 10] - 1] = arr[i];
            count[index % 10]--;
            i--;
        }
    
        for (i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }
    
    public static void radixSort(int[] arr) {
        int maxValue = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
    
        int exp = 1;
        while (maxValue / exp > 0) {
            countingSort(arr, exp);
            exp *= 10;
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {170, 45, 75, 90, 802, 24, 2, 66};
        radixSort(arr);
        System.out.print("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
    
}
