class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int k=1,n=nums.size();
            if(n==0)
            return 0;
            for(int i=0;i<n-1;i++){
                if(nums[i]!=nums[i+1]){
                nums[k]=nums[i+1];
                 k++;
                }
            }
            return k;
        }
    };