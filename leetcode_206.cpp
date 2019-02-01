/*************************************************************************
	> File Name: leetcode_206.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年02月01日 星期五 15时18分32秒
 ************************************************************************/

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    } 
    return ret.next;

}
