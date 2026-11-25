class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp=triangle;
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                dp[i][j]+=min(dp[i+1][j], dp[i+1][j+1]);
            }
        }
        return dp[0][0];
        
        // int b=INT_MAX;
        // int c=0;
        // int sum=0;
        // for(int i=0;i<triangle[0].size();i++)
        // {
        //     if(triangle[0][i]<b)
        //     { c=i;
        //     b=triangle[0][i];
        //     }
        // }
        // sum+=b;
        // int pre=c;
        // int m=0;
        // for(int k=1;k<triangle.size();k++)
        // {    int d=INT_MAX;
            
        //       if(pre+1<triangle[k].size())
        //       {
        //          for(int j=pre;j<=pre+1;j++)
        //          {
        //             if(triangle[k][j]<d)
        //             {
        //                 d=triangle[k][j];
        //                 m=j;
        //             }
        //          }
        //          sum+=d;
        //       }
        //       else
        //       {
        //       sum+=triangle[k][pre];
        //       m=pre;
        //       }
        //       pre=m;
              
            
                
            
            
            
        // }
        // return sum;
        
    }
};
