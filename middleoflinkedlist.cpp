// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int counter=0;
//         ListNode*temp1=head;
//         ListNode*temp2=head;
//         while(temp1!=NULL){
//             temp1=temp1->next;
//             counter++;
//         }
//         counter=(counter/2)+1;
//         int i=0;
//          while(temp2!=NULL && i<counter-1){
//             temp2=temp2->next;
//             i++;
//         }
//         return temp2;
//     }
// };