#include <iostream>

using namespace std;


struct ListNode{
    int val;
    ListNode* next;
};

int main(){

    // Usage of the function here
    return 0;
}

bool hasCycle(ListNode *head) {
        // Implement the tortoise and hare algorithm

        if (head == NULL || head ->next == NULL || head->next->next == NULL){
            return false;
        }

        ListNode* tortoise = head;
        ListNode* hare = head->next->next;

        while (tortoise != NULL && hare != NULL){

            if (tortoise == hare){
                return true;
            }

            tortoise = tortoise->next;

            if (hare->next == NULL ){
                return false;
            }
            
            hare = hare->next->next;

        }

        return false;
}

