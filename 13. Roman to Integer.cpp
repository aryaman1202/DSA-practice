class Solution {
public:
    int value(char c){
        int num;
        if(c=='I'){
            num = 1;
        }
        else if(c=='V'){
            num=5;
        }
        else if(c=='X'){
            num=10;
        }
        else if(c=='L'){
            num=50;
        }
        else if(c=='C'){
            num=100;
        }
        else if(c=='D'){
            num=500;
        }
        else if(c=='M'){
            num=1000;
        }
        return num;
    }
    int romanToInt(string s) {
        int num = 0;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
                num = num+value(s[i]);
            }
            else{
                if(value(s[i])<value(s[i+1])){
                    num = num + (value(s[i+1])-value(s[i]));
                    i=i+1;
                }
                else{
                    num = num + value(s[i]);
                }
            }
        }
        return num;
    }
};