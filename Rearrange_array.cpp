class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums){

        vector<int> posi;
        vector<int> negi;
        int posicount=0; 
        int negicount=0;

        for(int i=0; i<nums.size(); i++){

            if(nums[i]>0){
                posi.push_back(nums[i]);
            }
            else{
                negi.push_back(nums[i]);
            }
        }

        for(int i=0; i<nums.size(); i++){

            if(i%2==0){
                nums[i]=posi[posicount];
                posicount++;
            }
            else{
                nums[i]=negi[negicount];
                negicount++;
            }
        }
        return nums;
    }
};
