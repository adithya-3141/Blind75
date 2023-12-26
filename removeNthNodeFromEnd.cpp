#include <iostream>

using namespace std;


struct ListNode{
    int val;
    ListNode* next;
};

int main(){

    // Fucntion usage here


}


ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast;
        ListNode* slow;

        fast = head;
        slow = head;

        if (head == NULL ){
            return head;
        }

        else if (head->next == NULL && n==1){
            return NULL;
        }

        for (int i=0; i<n; i++){
            fast = fast->next;
        }

        // condition to check if the node to be deleted id the first node
        if (fast == NULL){
            return slow->next;
        }

        while (fast->next ){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return head;
        
    }

