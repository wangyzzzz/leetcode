/*************************************************************************
	> File Name: leetcode_24_2.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 12时15分52秒
 ************************************************************************/

/**
 ** Definition for singly-linked list.
 ** struct ListNode {
 **     int val;
 **     struct ListNode *next;
 ** };
 **/
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode ret, *p = &ret;
    ret.next = head;
    while (p->next != NULL && p->next->next != NULL) {
        struct ListNode *p1 = p->next;
        struct ListNode *p2 = p->next->next;
        p->next = p->next->next;
        if(p1 != NULL && p2 != NULL && p->next != NULL) {
            p1->next = p2->next;
            p->next->next = p1;
            p = p->next->next;
        }   
             
    }
    return ret.next;
}

