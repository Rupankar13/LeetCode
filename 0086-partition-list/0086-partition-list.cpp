/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> begin;
        vector<int> end;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val < x){
                begin.push_back(temp->val);
            }else{
                end.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* NewHead=NULL;
        ListNode* NewTail=NULL;
        for(int i=0;i<begin.size();i++){
            ListNode* newNode=new ListNode(begin[i]);
            if(NewHead==NULL){
                NewHead=newNode;
                NewTail=newNode;
            }else{
                NewTail->next=newNode;
                NewTail=NewTail->next;
            }
        }
        for(int i=0;i<end.size();i++){
            ListNode* newNode=new ListNode(end[i]);
            if(NewHead==NULL){
                NewHead=newNode;
                NewTail=newNode;
            }else{
                NewTail->next=newNode;
                NewTail=NewTail->next;
            }
        }
        return NewHead;
    }
};