/*************************************************************************
	> File Name: leetcode_19.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年01月31日 星期四 21时18分58秒
 ************************************************************************/

/**
 ** Definition for singly-linked list.
 ** struct ListNode {
 **     int val;
 **     struct ListNode *next;
 ** };
 **/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *p = head, *q = head;
         
    for (int i = 0; i < n; i++) {
        if (p != NULL)
        p = p->next;
    }
    if (p == NULL) return head->next;
    while (p != NULL && p->next != NULL) {
        p = p->next;
        q = q->next;
             
    }
    struct ListNode *NTH = q->next;
    if (q != NULL && q->next != NULL) {
        q->next = q->next->next;
             
    }
        free(NTH);
        return head;

}

