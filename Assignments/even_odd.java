
import java.util.*;
public class even_odd {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt(); 
        if(n%2==0){
            System.out.println("Its an even number");
        }
        else
        System.out.println("Its an odd number");
        in.close();
    }
    
}
