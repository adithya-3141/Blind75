#include <iostream>

using namespace std;


struct ListNode{
    int val;
    ListNode* next;
};

int main(){


    return 0;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL){
            return list2;
        }

        if (list2 == NULL){
            return list1;
        }

        ListNode* itr = list1;
        if (list1->val > list2->val){
            itr = list2;
            list2 = list2->next;
        }
        else{
            list1 = list1->next;
        }

        ListNode* curr = itr;
        while (list1 != NULL && list2 != NULL){
           
            
            if (list1->val >= list2->val){
                curr->next = list2;
                list2 = list2->next;
            }

            else{
                curr-> next = list1;
                list1 = list1->next;
            }

            curr = curr->next;

        }

        if (list1 != NULL){
            curr -> next = list1;
        }

        if (list2 != NULL){
            curr->next = list2;
        }

        return itr;
        
    }