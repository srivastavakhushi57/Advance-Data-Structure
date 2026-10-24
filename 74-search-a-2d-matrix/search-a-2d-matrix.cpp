
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p=matrix.size(), q=matrix[0].size();
        int l=0,h=p-1;
        bool ans=false;

        while(l<=h){
            int m=(l+h)/2;

            if(matrix[m][0]>target){
                h=m-1;
            }
            else if(matrix[m][q-1]<target){
                l=m+1;
            }
            else{
                int low=0,high=q-1;

                while(low<=high){
                    int mid=(low+high)/2;

                    if(matrix[m][mid]>target){
                        high=mid-1;
                    }
                    else if(matrix[m][mid]<target){
                        low=mid+1;
                    }
                    else{
                        return true;
                    }
                }
                return false;
            }
        }
        return ans;
    }
};