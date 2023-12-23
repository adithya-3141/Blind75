#include <iostream>
#include <vector>

using namespace std;


int main(){
    
}


// implementation of kadanes algorithm
int maxSubArray(vector<int>& nums) {
       int max_so_far = INT_MIN;
       int max_ending_here = 0;


       for (int n: nums){
            max_ending_here = max_ending_here + n;

            if (max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }

            if (max_ending_here < 0){
                max_ending_here = 0;
            }
       }

       return max_so_far;
}