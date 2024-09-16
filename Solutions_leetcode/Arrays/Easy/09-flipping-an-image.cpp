class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>> ans(n,vector<int>());
        for(int i = 0; i < n; i++){
            for(int j = n-1; j>=0; j--){
                if(image[i][j] == 0){
                    ans[i].push_back(1);
                }else{
                    ans[i].push_back(0);
                }
            }
        }

        return ans;
    }
};

// or 

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>>v=image;
      
      for(int i=0;i<n;i++)
      {
        reverse(v[i].begin(),v[i].end());
      }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                   v[i][j]=1;
                }
                else
                {
                   v[i][j]=0;
                }
            }
        }
        
        return v;

    }
};