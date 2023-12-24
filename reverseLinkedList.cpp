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

ListNode* reverseList(ListNode* head) {

        if (head == NULL || head->next == NULL){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt = NULL;


        while (curr ){
            nxt = curr->next;
            curr->next = prev;

            prev = curr;
            curr = nxt;
        }

       
        return prev;

}