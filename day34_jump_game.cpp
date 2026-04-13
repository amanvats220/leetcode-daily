class Solution {
    public:
        int jump(vector<int>& nums) {
            int jumps = 0, currEnd = 0, currFar = 0;
            for (int i = 0; i < nums.size() - 1; i++) {
                currFar = max(currFar, i + nums[i]);
                if (i == currEnd) {
                    jumps++;
                    currEnd = currFar;
                }
            }
            return jumps;
        }
    };