class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int temp=numBottles;
   
        while(numBottles>=numExchange){
           temp=temp+numBottles/numExchange;
           numBottles=(numBottles/numExchange)+(numBottles%numExchange);
                  
        }
     return temp;   
    }

};