class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        ll n = nums.size();
        ll closest=INT_MAX;
        for(ll i =0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            ll left= i+1;
            ll right=n-1;
            while(left<right){
                ll sum = nums[i]+nums[left]+nums[right];
                if(sum ==target) return sum;
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                if(sum<target){
                    left++;
                }else{
                    right--;
                }
            }
#define ll long long
        sort(nums.begin(),nums.end());