int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini = min(nums[i] , mini);
            maxi = max(nums[i] , maxi);
        }
        int ans = gcd( mini , maxi );
        return ans;
    }
};