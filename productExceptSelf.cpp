#include <iostream>
#include <vector>

using namespace std;


int main(){


}

vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size();
    vector<int>result;
    vector<int> prev(n, 1);
    vector<int> suff(n,1);

    for (int i=1; i<n; i++){
        prev[i] = prev[i-1] * nums[i-1];
    }

    for (int i=n-2; i>=0; i--){
        suff[i] = suff[i+1]*nums[i+1];
    }

    for (int i = 0; i<n; i++){
        int prod = prev[i] * suff[i];
        result.push_back(prod);
    }

    return result;
    
}