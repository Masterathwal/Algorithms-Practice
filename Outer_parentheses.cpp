class Solution {
public:
    string removeOuterParentheses(string s){

        int balance = 0;
        string result = "";

        for(char i:s){

            if(i=='('){

                if(balance>0){
                    result = result + i;
                }
                balance++;
            }

            else{
                balance--;

                if(balance>0){
                    result = result + i;
                }
            }
        }
        return result;
    }
};
