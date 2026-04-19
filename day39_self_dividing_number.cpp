class Solution {
    public:
        vector<int> selfDividingNumbers(int left, int right) {
            vector<int> ans;
            for(int i = left; i <= right; i++) {
                int num = i;
                bool isValid = true;
    
                while(num > 0) {
                    int rem = num % 10;
                    if(rem == 0 || i % rem != 0) {
                        isValid = false;
                        break;
                    }
    
                    num /= 10;
                }
    
                if(isValid) {
                    ans.push_back(i);
                }
            }
    
            return ans;
        }
    };