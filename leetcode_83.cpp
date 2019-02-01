/*************************************************************************
	> File Name: leetcode_83.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 13时00分52秒
 ************************************************************************/

/**
 ** Definition for singly-linked list.
 ** struct ListNode {
 **     int val;
 **     struct ListNode *next;
 ** };
 **/
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode ret, *p = &ret;
    ret.next = head;
    while (p->next != NULL) {
        int temp = p->next->val;
        while (p->next->next != NULL && p->next->next->val == temp) {
        p->next = p->next->next;
        }
        p = p->next;
    }
    return ret.next;
}

