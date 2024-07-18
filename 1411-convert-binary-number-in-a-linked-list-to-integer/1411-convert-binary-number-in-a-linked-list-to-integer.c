/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int* arr=(int*)malloc(sizeof(int)*30);
    struct ListNode* temp=head;
    int i=0,val=0;
    while(temp)
    {
        arr[i]=temp->val;
        temp=temp->next;
        i++;
    }
    int k=i-1;
    for(int j=0;j<i;j++){
        val+=(pow(2,k)*arr[j]);
        k--;
        printf("%d ",val);
    }
    return val;
}