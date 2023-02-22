class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0;
        int r=nums.size()-1;
        int mid;

        while (l<=r){
            mid = l + (r-l)/2;
            int num = nums[mid];
            if (target<num){
                r = mid-1;
            }
            else if (target>num){
                l = mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;

    }
};