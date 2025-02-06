class Solution {
public:
    string frequencySort(string s){

        unordered_map<char,int> freq;
        string result;

        for(char c:s){
            freq[c]++;
        }

        int n = s.size();
        vector<string> buckets(n+1);

        for(auto it = freq.begin(); it!=freq.end(); it++){
            char ch = it->first;
            int count = it->second; 
            buckets[count] += string(count,ch);
        }

        for(int i=n; i>0; i--){

            if(!buckets[i].empty()){
                result += buckets[i];
            }
        }
        return result;
    }
};
