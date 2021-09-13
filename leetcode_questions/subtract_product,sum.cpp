// for getting digits firstly %10 , then /10;
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum =0, product=1, ans;
        while(n>0){
            sum += n%10;
            product *= n%10;
            n =n/10;
            ans = product-sum;
        }
        return ans;
    }
};