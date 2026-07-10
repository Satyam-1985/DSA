class Solution {
public:
    int add(int n){
         int  digit , sum  = 0;
        while(n>0){
          digit= n%10;
            n = n/10 ;
            sum += digit * digit;
        }
        return sum;

    }

    bool isHappy(int n) {
       int slow = n ;
       int fast =n ;

       while(fast !=1 ){
        slow = add(slow);
        fast = add(fast);
        fast = add(fast);

        if(slow == fast && slow !=1){
            return false;
        }
       }
       return true;
    }
};