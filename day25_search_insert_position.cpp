class Solution {
    public:
        int searchInsert(vector<int>& arr, int target) {
            int start=0,end=arr.size()-1,index=arr.size(),mid;
            while(start<=end){
                mid=start+(end-start)/2;
                if(arr[mid]==target){
                    index=mid;
                    break;
                }
                else if(arr[mid]<target){
                    start=mid+1;
                }
                else{
                index=mid; 
                end=mid-1;
            }
        }
        
            return index;
        }
    };