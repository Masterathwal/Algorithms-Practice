class Solution {
public:
    int majorityElement(vector<int>& nums){

        unordered_map<int,int> countmap;
        int ans=0;

        for(int i=0; i<nums.size(); i++){
            countmap[nums[i]]++;
        }

        for(auto it:countmap){

            if(it.second>(nums.size()/2)){
                return it.first;
            }
        }
        return ans;
    }
};
