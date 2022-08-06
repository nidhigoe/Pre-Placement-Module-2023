#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void append(node **head , int data){
    node *temp = new node(data);
    node *ptr=*head;
    if(*head==NULL){
        *head=temp;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    return;
}

void reverse(node **head){
    node *curr=*head;
    node *prev=NULL,*nxt=NULL;

    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    *head=prev;
    return;
}

void display(node* &head){
    node *ptr=head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr=ptr->next; 
    }
    cout << endl;
    return;
}

void printNthNodeBack(node *head , int n){
    node *first=head;
    node *second=head;

    for(int i=0;i<n;i++){
        first=first->next;
    }

    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    cout << second->data;
}

void printNthNode(node *head , int n){
    node *temp=head;
    while(n!=1){
        temp=temp->next;
        n--;
    }

    cout << temp->data <<endl ;
    return;
}

int search(node *head, int x){
    if(head==NULL)return -1;
    if(head->data ==x)return 1;
    else{
        int res=search(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }
}

void removeDuplicate(node **head){
    node *curr=*head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data!=curr->next->data){
            curr=curr->next;
        }
        else{
            node *temp;
            temp=curr->next;
            curr->next=temp->next;
            delete(temp);
        }
    }

}


int main() {

    node *head=NULL;
    append(&head,5);
    append(&head,6);
    append(&head,6);
    append(&head,7);
    append(&head,8);
    append(&head,8);
    append(&head,8);
    display(head);

    removeDuplicate(&head);
    display(head);
    
    return 0;
}
