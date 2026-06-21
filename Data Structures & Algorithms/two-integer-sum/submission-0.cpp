class Solution {
public:
    vector<int> twoSum(vector <int> nums, int target) {
        unordered_map<int, int> seen;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int c_n = nums[i];
            int comp = target - c_n;
            if(seen.find(comp)!=seen.end()){
                return {seen[comp],i};
            }
            seen[c_n] =i;
        }
    }
};
