class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int x = 0;
        int sum = 0;
        for( char c : s){
            if( c !=  '0'){
                int digit = c - '0';
                x = x * 10 + digit;
                sum += digit;
            }
        }return (long long )sum * x;
    }
};