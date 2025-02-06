class Solution {
public:
    int myAtoi(string s){

        int result=0;
        int i=0;
        int sign=1;

        while(i<s.size() && s[i]==' '){
            i++;
        }

        if(i<s.size() && (s[i]=='-' || s[i]=='+')){

            if(s[i]=='-'){
                sign=-1;
            }
            else{
                sign=1;
            }
            i++;
        }

        while(i<s.size() && isdigit(s[i])){
            int digit = s[i]-'0';

            if(result> (INT_MAX - digit)/10){

                if(sign==1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            result = result*10 + digit;
            i++;
        }

        return result*sign; 
    }
};
