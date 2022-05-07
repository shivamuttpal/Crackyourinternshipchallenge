// node *deleteDuplicates(node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *temp0 = head;
//     node *temp = head;
//     node *temp1 = head->next;
//     // stack<int>st;
//     // st.push(temp->data);
//     while (temp1 != NULL)
//     {
//         if (temp1->data == temp->data)
//         {
//             temp->next = temp1->next;
//             temp1 = temp->next;
//         }
//         else{
//             temp=temp->next;
//             temp1=temp1->next;
//         }
//     }
//     return temp0;
// }