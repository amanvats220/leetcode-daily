class Solution {
    public:
        bool isHappy(int n) {
            unordered_set<int> seen;
            while (n != 1) {
                if (seen.count(n)) return false;
                seen.insert(n);
                int res = 0;
                while (n > 0) {
                    int rem = n % 10;
                    res += rem * rem;
                    n /= 10;
                }
                n = res;
            }
            return true;
        }
    };