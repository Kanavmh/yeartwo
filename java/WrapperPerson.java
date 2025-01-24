import java.util.Scanner;

/*Create a person with data: age, name, address
 * create 3 constructors
 * make sure name can never be null
 * create getter and setter for class
 * create an array of person and store 5 persons in it
 * Sort the array based on age
 */

class Person{
    private String name, address;
    private int age;

    Person(){
        this.age = 0;
        this.name = "Unknown";
        this.address = "Unknown";
    }

    public Person(int age, String name, String address){
        this.age = age;
        this.name = name;
        this.address = address;
    }
    
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }

    public int getAge(){
        return age;
    }
    public void setAge(int age){
        this.age = age;
    }

    public String getAddress(){
        return address;
    }
    public void setAddress(String address){
        this.address = address;
    }

}

public class PersonWrapper {
    public static void main(String[] args) {

        int[][] array = new int[3][3];
        Person person = new Person();
        Scanner sc = new Scanner(System.in);


        for(int i=0; i<3;i++){
            System.out.println("Enter the name: ");
            person.setName(sc.nextLine());
            System.out.println("Enter the age: ");
            person.setAge(sc.nextInt());
            sc.nextLine();
            System.out.println("Enter the address: ");
            person.setAddress(sc.nextLine());

            array[i][0] = person.getAge();
            array[i][1] = person.getName().length();
            array[i][2] = person.getAddress().length();
        }

        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
            if (array[j][0] > array[j + 1][0]) {
                int[] temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            }
        }
        for (int i = 0; i < array.length; i++) {
            System.out.println("Age: " + array[i][0] + ", Name: " + person.getName() + ", Address: " + person.getAddress());
        }
        }

    }
    


