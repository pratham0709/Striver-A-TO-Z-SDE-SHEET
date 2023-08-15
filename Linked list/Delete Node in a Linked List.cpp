class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next == NULL) delete node;
        swap(node->val, node->next->val);

        ListNode*temp2 = node->next;
        node->next = temp2->next;
        delete temp2;
    }
};