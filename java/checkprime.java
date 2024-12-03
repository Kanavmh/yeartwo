import java.util.Scanner;

public class checkprime{
    public static void main(String[] args) {
        int number;
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            number = scanner.nextInt();
        }

    boolean isPrime = true;
    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        System.out.println(number + " is a prime number.");
    } else {
        System.out.println(number + " is not a prime number.");
    }
}
}
