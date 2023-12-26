#include <iostream>

using namespace std;


vector<int> dp(46, -1);
    

int climbStairs(int n);

int main(){
    cout<<climbStairs(3);
}

// dynamic programming approach
int climbStairs(int n) {
        

        if (n == 0){
            return 1;
        }

        // Memoization
        if (dp[n] != -1){
            return dp[n];
        }

        if (n >= 2){
            return dp[n] = (climbStairs(n-2) + climbStairs(n-1));
        }

        if (n<2){
            return dp[n] = climbStairs(n-1);
        }

        return -1;
}


