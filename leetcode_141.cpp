/*************************************************************************
	> File Name: leetcode_141.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 13时55分00秒
 ************************************************************************/

/**
 ** Definition for singly-linked list.
 ** struct ListNode {
 **     int val;
 **     struct ListNode *next;
 ** };
 **/
bool hasCycle(struct ListNode *head) {
    struct ListNode *first = head;
    struct ListNode *second = head;
    while (first != NULL && second != NULL && first->next != NULL) {
        first = first->next->next;
        second = second->next;
        if (first == second) return true;
             
    }

    return false;
    
}

