class Solution {
public:
    int findKthPositive(vector<int>& arr, int k){      

        vector<int> posi(2000);
        std::iota(posi.begin(),posi.end(),1);

        for(int i=0; i<arr.size(); i++){

            auto it = std::find(posi.begin(), posi.end(), arr[i]);

            if(it!=posi.end()){
                posi.erase(it);
            }
        }

        return posi[k-1];
    }
};
