class Solution {
public:
    string largestOddNumber(string num) {

        string larodd = "";
        int posi = -1;

        for(int i=0; i<num.size(); i++){

            int digit = num[i]-'0';

            if(digit%2!=0){
                posi = i;
            }
        }

        if(posi==-1){
            return larodd;
        }

        return num.substr(0,posi+1);      
    }
};
