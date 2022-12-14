import java.util.Scanner;
public class p9 {
    public static void main(String[] args) {
       Scanner s = new Scanner (System.in);
       String x = s.next();
       for (int i = Integer.parseInt(x)+1;i<=9012;i++){
           if (String.valueOf(i).chars().distinct().count()==x.length()){
               System.out.println(i);
               break;
           }
       }
    }
} 