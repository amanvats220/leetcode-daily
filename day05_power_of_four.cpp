class Solution {
    public:
        bool isPowerOfFour(int n) {
            if(n<1)
            return false;
            while(n>1){
                if(n%4==1||n%4==2||n%4==3)
                return false;
                n=n/4; 
            }
            return true;
        }
    };
   
