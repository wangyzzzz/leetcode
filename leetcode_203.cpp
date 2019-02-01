/*************************************************************************
	> File Name: leetcode_203.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 15时00分04秒
 ************************************************************************/

/**
 ** Definition for singly-linked list.
 ** struct ListNode {
 **     int val;
 **     struct ListNode *next;
 ** };
 **/
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode ret, *p = &ret;
    ret.next = head;
    while (p != NULL) {
    if (p->next != NULL && p->next->val == val) {
        struct ListNode *temp = p->next;
        p->next = p->next->next;
        free(temp);
    }
    else p = p->next;
             
    }
    return ret.next;

}

