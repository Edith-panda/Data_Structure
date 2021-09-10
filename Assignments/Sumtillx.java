import java.util.*;
public class Sumtillx {
    public static void main(String[] args) {
        int sum=0;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while(n!=0){
            sum = sum+n;
            
        }
        System.out.print(sum);
        in.close();

    }
}
