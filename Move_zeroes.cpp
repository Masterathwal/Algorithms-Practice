class Solution {
public:
    void moveZeroes(vector<int>& num){

        int n = num.size();
        int low = 0;
        int high = 0;

        while(high<n){

            if(num[low]==0 && num[low]==num[high]){
                high++;
            }

            else if(num[low]==0 && num[low]!=num[high]){
                swap(num[low],num[high]);
                low++;
                high++;
            }

            else if(num[high]==0 && num[low]!=num[high]){
                low = high;
                high++;
            }

            else{
                high++;
            }
        }                               
    }
};
