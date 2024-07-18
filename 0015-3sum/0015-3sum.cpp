class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
              sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        int sum=0;
        for(int i=0;i<nums.size()-2;i++){
            
            int j=i+1;
            int k=nums.size()-1;

            
            while(j<k){
            sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }

        vector<vector<int>> ansmain;

        for(auto it : ans){
         ansmain.push_back(it);
        }

        return ansmain;
    }
};