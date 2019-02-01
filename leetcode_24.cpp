/*************************************************************************
	> File Name: leetcode_24.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 11时24分21秒
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
    struct ListNode *q = p->next;
    while (q != NULL && q->next != NULL) {
        struct ListNode temp = *p;
        p->next = q->next;
        q->next = p->next->next;
        p->next->next = temp.next;
        //错误点：经过上面的交换 q已经不是p后的第一个节点，而是第二个节点，所以需要初始化。
        q = p->next;
        p = p->next->next;
        q = q->next->next;
    }
    return ret.next;

}
