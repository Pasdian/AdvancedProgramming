// this program includes the class declaration etc so that it can run – this isn’t
// needed for a correct answer
import java.util.*;
public class Perfect {
 public static void main(String[] args) {
 Scanner console = new Scanner(System.in);
 int n = 1; // any number other than 0 to start the loop
 while (n!=0) {
 System.out.print("Enter an integer: ");
 n = console.nextInt();
 findAllPerfectUpto(n);
 }
 System.out.println("bye");
 }


 public static void findAllPerfectUpto(int n) {
System.out.print("Perfect numbers up to " + n + ":");
 for (int current = 1; current <= n; current++) {
 int sum = 0;
 //
 for (int factor = 1; factor < current; factor++) {
 if (current % factor==0) {
sum = sum+factor;
}
}
if (sum == current) {
System.out.print(" " + current);
}
}
System.out.println();
 }
}