class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> neededValue;
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(neededValue.count(nums[i])){
                result.push_back(neededValue[nums[i]]);
                result.push_back(i);
            }
            else{
                neededValue[difference] = i;
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
