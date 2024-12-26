public class Stringfuncs2 {
    public static void main(String[] args){
        //trim,toUpperCase, lowercase, split, indexOf
        //String to int, int to string
        String nums = "256,53, 12";
        strtoint(nums);

        String names = "Dinesh Kumar, Mukesh, Deepak K Gupta";
        nickname(names);
    }

    public static void strtoint(String str){
        String[] cut = str.split(",");
        for(int i=0; i<cut.length;i++) {
            String s = cut[i];
            int num = Integer.parseInt(s.trim());
            System.out.println(num);
        }
    }

    public static void nickname(String str){
        String[] names = str.split(",");
        StringBuilder init = new StringBuilder();
        for (int i = 0; i < names.length; i++) {
            String[] parts = names[i].trim().split(" ");
            for (int j = 0; j < parts.length; j++) {
                String part = parts[j];
                init.append(part.charAt(0));
            }
            if (i < names.length - 1) {
                init.append(", ");
            }
        }
        System.out.println(init.toString());
    }
}

