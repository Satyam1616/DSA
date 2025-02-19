#include <iostream>

using namespace std;

#include "ListNode.h"

  class LinkedList {
public:
    ListNode* head;
    LinkedList() : head(nullptr) {}

    void append(int value) {
        if (!head) {
            head = new ListNode(value);
            return;
        }
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new ListNode(value);
    }

    void printList() {
        ListNode* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if (list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }

        return dummyNode->next;
    }
};

int main() {
    LinkedList list1, list2;
    list1.append(1);
    list1.append(3);
    list1.append(5);
    
    list2.append(2);
    list2.append(4);
    list2.append(6);
    
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1.head, list2.head);
    
    LinkedList mergedLinkedList;
    mergedLinkedList.head = mergedList;
    
    cout << "Merged Sorted List: ";
    mergedLinkedList.printList();
    
    return 0;
}
