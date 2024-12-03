import java.util.Scanner;

public class arraylength {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter the size of the array:");
            int size = scanner.nextInt();

            int[] numbers = new int[size];

            for (int i = 0; i < size; i++) {
                System.out.println("Enter number " + (i + 1) + ":");
                numbers[i] = scanner.nextInt();
            }

            System.out.println("The length of the array is: " + numbers.length);
        System.out.println("The elements of the array are:");
        for (int number : numbers) {
            System.out.print(number + " ");
        }
        }
    }
}