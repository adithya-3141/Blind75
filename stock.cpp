#include <iostream>
#include <vector>
using namespace std;



int main(){

}

int maxProfit(vector<int>& prices){

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i=1; i<prices.size(); i++){
        if (prices[i] - minPrice > maxProfit){
            maxProfit = prices[i] - minPrice;
        }

        if (minPrice > prices[i]){
            minPrice = prices[i];
        }
    }

    return maxProfit;
        
}