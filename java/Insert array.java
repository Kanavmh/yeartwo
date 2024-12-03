import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    private static ArrayList<Integer> list = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Insert at end:");
            System.out.println("2. Display the list:");
            System.out.println("3. Insert at specified position:");
            System.out.println("4. Exit");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    insertAtEnd(scanner);
                    break;
                case 2:
                    displayList();
                    break;
                case 3:
                    insertAtPosition(scanner);
                    break;
                case 4:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please select again.");
            }
        } while (choice != 4);
    }

    private static void insertAtEnd(Scanner scanner) {
        System.out.println("Enter the number to insert at the end:");
        int number = scanner.nextInt();
        list.add(number);
        System.out.println("Number inserted at the end.");
    }

    private static void displayList() {
        System.out.println("The list is:");
        for (int number : list) {
            System.out.print(number + " ");
        }
        System.out.println();
    }

    private static void insertAtPosition(Scanner scanner) {
        System.out.println("Enter the position to insert:");
        int position = scanner.nextInt();
        System.out.println("Enter the number to insert:");
        int number = scanner.nextInt();
        if (position >= 0 && position <= list.size()) {
            list.add(position, number);
            System.out.println("Number inserted at position " + position + ".");
        } else {
            System.out.println("Invalid position.");
        }
    }
}
