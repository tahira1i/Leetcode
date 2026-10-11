class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> arr;
        arr = nums;
        // sort the array
        sort(arr.begin(), arr.end());

        // using two pointer uproach
        int l =0, r = arr.size()-1;
        while(l<r){
            if(arr[l]+ arr[r] == target){
                break;
            }
            else if(arr[l]+ arr[r] < target){
                l++;
            }else{
                r--;
            }
        }
        vector<int> ans;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] == arr[r] || nums[i]== arr[l]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};