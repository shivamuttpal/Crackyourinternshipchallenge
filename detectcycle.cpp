// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode*temp=head;
//         if(temp==NULL || temp->next==NULL){
//             return false;
            
//         }
//         ListNode* hare=head;
//         ListNode* tortise=head;
        
        
//         while(hare!=NULL && hare->next!=NULL){
//             tortise=tortise->next;
//             hare=hare->next->next;
//             if(hare==tortise){
//                 return true;
//             }
//         }
//         return false;
//     }
// };