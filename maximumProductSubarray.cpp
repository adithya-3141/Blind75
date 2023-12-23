#include <iostream>
#include <vector>

using namespace std;


int main(){



}


int maxProduct(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int max_ending_here = 1;
        int n = nums.size();


        for (int i=0; i<n; i++){
            max_ending_here = max_ending_here * nums[i];
            max_so_far = max(max_so_far, max_ending_here);
            if (max_ending_here == 0){
                max_ending_here = 1;
            }
        }
        max_ending_here = 1;
        for (int i = n-1; i>=0; i--){
            max_ending_here = max_ending_here * nums[i];
            max_so_far = max(max_so_far, max_ending_here);
            if (max_ending_here == 0){
                max_ending_here = 1;
            }
        }


        return max_so_far;
}