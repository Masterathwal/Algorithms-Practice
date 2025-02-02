class Solution {
public:
    int romanToInt(string s){

        unordered_map<char,int> table; 
        int sum=0;

        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['L'] = 50;
        table['C'] = 100;
        table['D'] = 500;
        table['M'] = 1000;

        for(int i=0; i<s.size(); i++){

            if(i+1<s.size() && table[s[i]] < table[s[i+1]]){
                sum = sum-table[s[i]]; 
            }
            else{
                sum = table[s[i]] + sum;
            }
        }

        return sum; 
    }
};
