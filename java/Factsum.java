public class Factsum {
    public static void main(String args[]){
        // int n = args.length;
        // System.out.print("Length: "+ args.length);
        // System.out.println(fact(n));

//to operate in cmd
//javac Factsum.java
//java Factsum {number}

        System.out.print("len: "+args.length);
        int sum = 0;

        for(int i = 0;i<args.length;i++){
            sum = sum + Integer.parseInt(args[i]);
        }
        System.out.println("Sum: "+sum);
//javac Factsum.java
//java Factsum 342 35 12
    }

    public static int fact(int n){
        int f = 1;
        for(int i=1; i<=n;i++){
            f = f * i;
        }
        return f;
    }
}
