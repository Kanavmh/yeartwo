public class Date {
    public static void main(String[] args){
        String date1 = "23.3.04";
        String date2 = "15/4/1998";
        String date3 = "12-3-2004";
        String date4 = "14-07/98";
        System.out.println(format(date1));
        System.out.println(format(date2));
        System.out.println(format(date3));
        System.out.println(format(date4));
    }
    
    public static int format(String date){

        String[] dateEl = date.split("[./-]");
        String first = dateEl[0];
        String second = dateEl[1];
        String third = dateEl[2];

        if(first.length() ==1){
            first = "0" + first;
        }
        if(second.length()==1){
            second = "0" + second;
        }       
        if(third.length() == 2){
            if(Integer.parseInt(third) > 20){
                third = "19" + third;
            } else{
                third = "20" + third;
            }
        }

        int finalval = Integer.parseInt(first + second + third);
        return finalval;
    }
    
}
