public class QuickSort {
    public static int partition(int[] arr, int lb, int ub) {
        int pivot = arr[lb];
        int start = lb;
        int end = ub;

        while (start < end) {
            while (start < arr.length && arr[start] <= pivot) {
                start++;
            }
            while (arr[end] > pivot) {
                end--;
            }
            if (start < end) {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
            }
        }
            
        int temp = arr[lb];
        arr[lb] = arr[end];
        arr[end] = temp;

        return end;
    }
    
    public static void quickSort(int[] arr, int lb, int ub) {
        if (lb < ub) {
            int key = partition(arr, lb, ub);
            quickSort(arr, lb, key - 1);
            quickSort(arr, key + 1, ub);
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        System.out.println("Original array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        quickSort(arr, 0, arr.length - 1);        
        System.out.println("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
