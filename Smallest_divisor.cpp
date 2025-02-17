class Solution {
public:

    int sumbyd(vector<int>&arr,int div){

        int sum=0;
        int n=arr.size();

        for(int i=0; i<n; i++){
            sum=sum+ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=1, high= *max_element(nums.begin(),nums.end());

        while(low<=high){
            int mid = (low+high)/2;

            if(sumbyd(nums,mid)<=threshold){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
