#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int Top ,size;
        int *arr=NULL;

    public:
        Stack(int n){
            this->size=n;
            this->Top=-1;
            arr = new int[n]; 
        }

        void push(int m){
            if(Top==size-1){
                cout << "Stack is full " << endl;
                return;
            }
            Top++;
            arr[Top]=m;
        }

        int pop(){
            if(Top==-1){
                cout << "Stack is empty " << endl;
                return -1;
            }
            int element=arr[Top];
            Top--;
            return element;
        }

        int top(){
            if(Top==-1){
                if(Top==-1){
                    cout << "stack is empty "<<endl;
                    return -1;
                }     
            }

            return arr[Top];
        }

        bool isEmpty(){
            if(Top==-1){
                return true;
            }
            return false;
        }

};


int main(){
    Stack st=Stack(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.isEmpty() ? cout <<"Stack is empty" << endl : cout << "Stack is not empty" << endl;
    cout << "Element poped : " <<st.pop() << endl;
    cout << st.top() << endl; 
    return 0;
}
