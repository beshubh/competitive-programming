import java.util.*;
class Main{
  
    public static void main(String []args){
        
        Scanner sk = new Scanner(System.in);
        int t = sk.nextInt();
        for(int i =0;i<t;i++){
            String s = sk.nextLine();
            System.out.println(s);
            System.out.println(getSum(s));
        }
    }   
    private static int getSum(String string){
        char [] chars = string.toCharArray();
        int sum = 0;
        for(int i = 0; i < chars.length; i++){
            sum+=Character.getNumericValue(chars[i]);
        }
        return sum;
    }
}