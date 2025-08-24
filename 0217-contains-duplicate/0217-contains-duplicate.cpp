class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> exists;
        for(int i = 0; i < nums.size(); i++){
            if(exists.find(nums[i]) != exists.end()){
                return true;
            }
            else{
                exists.insert(nums[i]);
            }
        }
        return false;
    }
};