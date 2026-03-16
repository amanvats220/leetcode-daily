class Solution {
    public:
        int addDigits(int num) {
            if(num<=9)
            return num;
             while(num>9)
             {
               int rem,sum=0;
                while(num!=0)
                {
                rem=num%10;
                num=num/10;
                sum+=rem;
                }   
             num=sum;
            }
            return num;
        }
    };