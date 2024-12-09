import java.util.Scanner;

public class sumofelements {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the size: ");
        int size = scanner.nextInt();
        int[] arr = new int[size];
        for(int i=0; i<size;i++){
            arr[i] = scanner.nextInt();
        }
        System.out.println("The array is: ");
        for(int i=0; i<size;i++){
            System.out.println(arr[i]+" ");
        }
        int sum = 0;
        for(int j= 0; j<size;j++){
            sum += arr[j];
        }
        System.out.println("Sum of elements: "+sum);

    }
}
