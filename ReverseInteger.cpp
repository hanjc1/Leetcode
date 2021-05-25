class Solution {
public:
    int reverse(int x) {
        int remainder; 
        long long reverse = 0;
        while (x != 0) {
            remainder = x % 10;
            reverse = reverse *10 + remainder;
            x = x/10; 
            }
            return (reverse > INT_MAX || reverse < INT_MIN)?0:reverse;     
        }
        
};
