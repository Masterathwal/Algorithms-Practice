class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,add=0;

        while(n!=0){
            int digit = n%10;
            pro = (pro*digit);
            add = (add+digit);
            n/=10;
        }

        return (pro-add);
    }
};
