class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum=0; 
        int tempsum=0;

        for(int i=0; i<=n; i++){
            sum = sum + i;
        }

        for(int i=0; i<n; i++){
            tempsum = tempsum + nums[i];
        }

        return (sum-tempsum);      
    }
};
