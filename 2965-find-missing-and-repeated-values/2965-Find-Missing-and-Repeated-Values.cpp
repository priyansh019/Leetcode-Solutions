class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans(2);
        vector<int>arr;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                ans[0]=arr[i];
                break;
            }
        }
        for(int i=1;i<=n*n;i++){    
            int co=0;
            for(int j=0;j<arr.size();j++){
                if(i==arr[j]){
                    co++;
                }
            }
            if(co==0){
                ans[1]=i;
            }
        }
        return ans; 
    }
};