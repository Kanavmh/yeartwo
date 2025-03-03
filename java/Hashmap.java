import java.util.HashMap;
public class Hashmap {
    public static void main(String[] args){

        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(1, 10);
        map.put(2, 20);
        map.put(3, 30);
        int keyToCheck = 2;

        if (map.containsKey(keyToCheck)) {
            System.out.println("Key "+keyToCheck+" is present");
        }else{
            System.out.println("Key "+keyToCheck+" is not present");
        }     

    }
    
}
