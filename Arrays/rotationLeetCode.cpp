class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp,i,j,n;
        n = nums.size();
        for(i=0;i<k;i++){
            temp = nums[n-1];
            
            for(j=n-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums[0] = temp;
            

        }
        

        
    }
    
};
