// class Solution
// {
//     public:
//     //Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node *head) {
        
//         // Add code here
//         int zero=0;
//         int one=0;
//         int two=0;
        
//         Node*temp = head;
//         while(temp!=NULL){
//             if(temp->data==1){
//                 one++;
//             }
//             else if(temp->data==2){
//                 two++;
//             }
//             else{
//                 zero++;
//             }
            
//             temp=temp->next;
//         }
        
//         temp=head;
        
//         while(zero--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(one--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(two--){
//             temp->data=2;
//             temp=temp->next;
//         }
//         return head;
//     }
// };
