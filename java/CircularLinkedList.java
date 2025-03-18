package DataStructures;

public class CircularLinkedList {
    static Node head = null;
    static Node tail = null;

    static class Node {
        int data;
        Node prev, next;

        public Node(int data) {
            this.data = data;
            this.prev = this.next = null;
        }
    }
    
    public static void main(String[] args) {
        insertAtBeginning(10);
        insertAtBeginning(-10);
        insertAtEnd(20);
        deleteFromEnd();
        printList();
    }

    public static void insertAtBeginning(int data) {
        Node newnode = new Node(data);

        if (head == null) {
            head = tail = newnode;
            newnode.next = newnode;
            newnode.prev = newnode;
        } else {
            newnode.next = head;
            newnode.prev = tail;
            head.prev = newnode;
            tail.next = newnode;
            head = newnode;
        }
    }

    public static void insertAtEnd(int data) {
        Node newnode = new Node(data);

        if (head == null) {
            head = tail = newnode;
            newnode.next = newnode.prev = newnode;
            return;
        } else {
            newnode.next = head;
            newnode.prev = tail;
            tail.next = newnode;
            head.prev = newnode;
            tail = newnode;
        }
    }

    public static void deleteFromBeginning() {
        if (head == null) {
            System.out.println("The List is empty...");
            return;
        } else {
            Node temp = head;
            temp.prev = tail;
            head = head.next;
            tail.next = head;
        }
    }

    public static void deleteFromEnd() {
        if (head == null) {
            System.out.println("The List is empty..");
            return;
        } else {
            Node temp = tail;
            temp.next = head;
            tail = tail.prev;
            tail.next = temp.next;
            head.prev = tail;
        }
    }

    public static void printList() {
        Node currentNode = head;
        while (currentNode != tail) {
            System.out.print(currentNode.data + " -> ");
            currentNode = currentNode.next;
        }
        System.out.print(currentNode.data + " -> " + null);
    }
}
