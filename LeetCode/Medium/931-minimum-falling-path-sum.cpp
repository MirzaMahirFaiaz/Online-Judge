class Solution {
public:
   //recursive soln get TLE
   /* int helper(int i, int j,vector<vector<int>>& matrix){
        if(j==-1||(matrix[0].size()==j))return 99999999;
       
        if(matrix[0].size()-1==i) return matrix[i][j];    
        
        int m=min(helper(i+1,j,matrix),helper(i+1,j+1,matrix));
        m= min(m,helper(i+1,j-1,matrix));
        return matrix[i][j]+m;
    }*/
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
       /* int mx=9999999;
        for(int j =0;j<matrix[0].size();j++){
            mx = min(mx,helper(0,j,matrix));
        }
     return mx;   */
        int n=matrix[0].size();
    for (int R = n - 2; R >= 0; --R) {
        for (int C = 0; C < n; ++C) {
 
            // best = min(matrix[R+1][C-1], matrix[R+1][C], matrix[R+1][C+1])
            int best = matrix[R + 1][C];
            if (C > 0)
                best = min(best, matrix[R + 1][C - 1]);
            if (C + 1 < n)
                best = min(best, matrix[R + 1][C + 1]);
            matrix[R][C] = matrix[R][C] + best;
        }
    }
 
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i)
        ans = min(ans, matrix[0][i]);
    return ans;

    }
};
