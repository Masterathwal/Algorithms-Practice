class Solution {
public:
    bool rotateString(string s, string goal){

        string temp = s;

        for(int i=0; i<s.size(); i++){

            temp = temp.erase(0,1) + s[i];

            if(temp==goal){
                return true;
            }
        }
        return false;
    }
};
