class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Solution 01:
        int n= nums.size();
        int sum=0, count=0, i=0, j=0;
        unordered_map<int, int>s;
        
        for(i=0; i<n; i++){
            sum += nums[i];
            if(sum==k)
                count++;
            if(s.find(sum-k)!=s.end())
                count+=s[sum-k]; //doesn't work with count++ {[0,0,0,0,
            s[sum]++;
        } 
        
        return count;
    }
};
