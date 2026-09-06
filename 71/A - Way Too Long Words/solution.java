import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
 
        while (t > 0) {
            String word = sc.next();
            if (word.length() > 10) {
                char first = word.charAt(0);
                char last = word.charAt(word.length() - 1);
                System.out.println("" + first + (word.length() - 2) + last);
            } else {
                System.out.println(word);
            }
            t = t - 1;  
        }
        sc.close();
    }
}