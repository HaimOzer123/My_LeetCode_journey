class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int possibleI =-1;
        int start=0;
        int  end= nums.size()-1;

        if(target > nums[end])return end+1; 

        while(start <= end){
            int mid=start+(end-start)/2;

            if(nums[mid] == target){
                possibleI = mid;
                return possibleI;
            } else if(nums[mid]>target){
                possibleI=mid;
                end=mid-1;   
            } else {
                start = mid+1;
            }
        }
        return possibleI;
    }
};