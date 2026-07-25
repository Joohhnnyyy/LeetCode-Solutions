class Solution {
public:
    int maxProduct(int n) {
        string numsString = to_string(n);
        int first = 0 ;
        int second = 0;
        for(int i = 0 ; i < numsString.size() ; i++){
            int currNum = numsString[i] - '0';
            if(currNum > first){
                second = first;
                first = currNum;
            }else if( currNum > second) second = currNum;
        }return first * second ;
    }
};