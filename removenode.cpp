//  void    remove_head(ListNode **head_ptr, int val)
//     {
//         ListNode    *head = *head_ptr;
//         ListNode    *temp;
        
//         while (head != NULL && head->val == val)
//         {
//             temp = head;
//             head = head->next;
//             delete temp;
//         }
//         *head_ptr = head;
//     }
    
//     void    remove_node(ListNode **node_ptr, int val)
//     {
//         ListNode    *temp;
        
//         while (*node_ptr != NULL)
//         {
//             if ((*node_ptr)->val == val)
//             {
//                 temp = *node_ptr;
//                 *node_ptr = (*node_ptr)->next;
//                 delete temp;
//                 continue;
//             }
//             node_ptr = &(*node_ptr)->next;
//         }
//     }
    
//     ListNode* removeElements(ListNode* head, int val) {
//         remove_head(&head, val);
//         if (head == NULL)
//             return (NULL);
//         remove_node(&head, val);
//         return (head);
//     }