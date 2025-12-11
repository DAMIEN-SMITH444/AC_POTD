class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int cnt = 0;
        int maxLen = 0;
        int i = 0 ; int j = 0;
        
        while(i < arr.size()){
            if(arr[i] <= dep[j]){
                cnt++;
                i++;
            }
            else{
                cnt--;
                j++;
            }
            maxLen = max(maxLen,cnt);
        }
        return maxLen;
    }
};
