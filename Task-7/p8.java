import java.util.Scanner;
public class p8 {
    public static void main(String[] args) {
        Scanner s = new Scanner (System.in);
        String in = s.next();
        in = in.replace("--", "2").replace("-.", "1").replace(".", "0");
        System.out.println(in);
    }
} 