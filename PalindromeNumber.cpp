class Solution {
public:
    bool isPalindrome(int x) {
        int remainder ;
        long long reverse = 0;
        int original =x;
        
        if(x< 0 ){
            return false;
        }

        while (x){
            remainder = x%10;
            reverse = reverse *10 + remainder;
            x = x/10; 
            }
     
        if (reverse == original || reverse == 0){
            return true;
        }
        else return false;
    }
};
