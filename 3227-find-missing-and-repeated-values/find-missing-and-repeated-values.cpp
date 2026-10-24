class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> hash(n*n+1,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                hash[grid[i][j]]++;
            }
        }

        int repeat=0;
        for(int i=0;i<n*n+1;i++){
            if(hash[i]>1){
                repeat=i;
            }
        }

        int miss;
        for(int i=1;i<n*n+1;i++){
            if(hash[i]==0){
                miss=i;
            }
        }

        return {repeat,miss};
    }
};