#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    node *temp = head;
    // cout<<"hello4"<<endl;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    // return;
}

int getDecimalValue(node *head)
{
    vector<int> v;
    node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    int n = v.size();
    int t = 0;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += (v[i] * pow(2, t));
        t += 1;
    }
    return ans;
}
int main()
{
    node *head = NULL;
    int arr[] = {1, 0, 1};
    // cout<<"hello1"<<endl;
    for (int i = 0; i < 3; i++)
    {
        insertattail(head, arr[i]);
    }
    print(head);
    getDecimalValue(head);
    // cout<<getDecimalValue(head)<<endl;
    return 0;
}