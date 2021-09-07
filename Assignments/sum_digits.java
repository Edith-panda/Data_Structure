import java.util.*;
public class sum_digits {
    public static void main(String args[]){
        int sum =0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        
        for(int i=0;i<n;i++){
            sum = sum+i;
        }
        System.out.println(sum);
    }
}
