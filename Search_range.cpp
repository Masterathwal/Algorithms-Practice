class Solution {
public:

    int lowerbound(vector<int>& nums, int x){

        int low=0, high=nums.size()-1;
        int ans=nums.size();

        while(low<=high){

            int mid = (low+high)/2;

            if(nums[mid]>=x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    int upperbound(vector<int>& nums, int x){

        int low=0, high=nums.size()-1;
        int ans=nums.size();

        while(low<=high){

            int mid = (low+high)/2;

            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target){

        int lb = lowerbound(nums, target);

        if(lb==nums.size() || nums[lb]!=target){
            return {-1,-1};
        }

        int ub = upperbound(nums, target);
        return {lb,ub-1};
    }
};
