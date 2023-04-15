class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(pow(2,i)<n){
            i++;
        }
        for(int j=0;j<=i;j++){
            if(pow(2,i)==n){
                return true;
            }
        }
        return false;
    }
};
