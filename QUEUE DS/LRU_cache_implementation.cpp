#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int key,val;
    node*next;
    node*prev;
    node(int key,int val){
        next=NULL;
        prev=NULL;
        this->key=key;
        this->val=val;
    }
};
class LRUcache{
    private:
    node*head=new node(-1,-1);
    node*tail=new node(-1,-1);
    int cap;
    unordered_map<int,node*>m;
    public:
    LRUcache(int capacity){
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node*newnode){
        node*temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    void deletenode(node*delnode){
        node*delprev=delnode->prev;
        node*delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key){
        if(m.find(key)!=m.end()){
            node*resnode=m[key];
            int res=resnode->val;
            m.erase(key);
            deletenode(resnode);
            addnode(resnode);
            m[key]=head->next;
            return res;
        }
        return -1;
    }
    void put(int key,int value){
        if(m.find(key)!=m.end()){
            node*existingnode=m[key];
            m.erase(key);
            deletenode(existingnode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        m[key]=head->next;
    }
};
int main(){
    int t;
    cout<<"enter the no of test cases "<<endl;
    cin>>t;
    while(t--){
        int size;
        cout<<"enter the size of cache "<<endl;
        cin>>size;
        LRUcache cache(size);

        int queries;
        cout<<"enter the value of queries "<<endl;
        cin>>queries;
        while(queries--){
            string say;
            cout<<"say either put or get"<<endl;
            cin>>say;

            if(say=="put"){
                int key,value;
                cin>>key>>value;
                cache.put(key,value);
            }
            else{
                int key;
                cin>>key;
                int ans=cache.get(key);
                cout<<ans<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}