#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    node *prev;
    int data;
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
class Stack
{
    node *top;
    node *mid;
    int count;

public:
    Stack()
    {
        top = NULL;
        mid = NULL;
        count = 0;
    }
    bool isempty()
    {
        if (count == 0)
            return true;
        else
            return false;
    }
    void push(int key)
    {
        node *newnode = new node(key);
        if (count == 0)
        {
            mid = newnode;
            top = newnode;
            count++;
        }
        else
        {
            newnode->next = top;
            top->prev = newnode;
            top = newnode;
            if (count % 2 == 1)
            {
                mid = mid->prev;
            }
            count++;
        }
    }
    int pop()
    {
        int val;
        if (isempty())
        {
            cout << "stack is empty " << endl;
            return -1;
        }
        if (count == 1)
        {
            node *temp = top;
            val = temp->data;
            top = NULL;
            mid = NULL;
            free(temp);
        }
        else
        {
            node *temp = top;
            val = temp->data;
            top = top->next;
            top->prev = NULL;
            if (count % 2 == 0)
            {
                mid = mid->next;
            }
            free(temp);
        }
        count--;
        return val;
    }
    int get_middle()
    {
        if (isempty())
        {
            cout << "stack is empty " << endl;
            return -1;
        }
        return mid->data;
    }
    void display()
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void delete_middle()
    {
        if (count == 0)
        {
            cout << "stack is empty " << endl;
            return;
        }
        if (count == 1)
        {
            node *temp = mid;
            top = NULL;
            mid = NULL;
            free(temp);
        }
        else if (count == 2)
        {
            node *temp = mid;
            top = top->next;
            mid = mid->next;
            top->prev = NULL;
            free(temp);
        }
        else
        {
            node *temp = mid;
            mid->next->prev = mid->prev;
            mid->prev->next = mid->next;
            if (count % 2 == 0)
            {
                mid = mid->next;
            }
            else
            {
                mid = mid->prev;
            }
            free(temp);
        }
        count--;
    }
};
int main()
{
    Stack st;
    st.push(45);
    st.push(67);
    st.push(34);
    st.push(12);
    st.push(90);
    st.push(87);
    cout << st.pop() << endl;
    st.display();
    cout << st.get_middle() << endl;
    st.delete_middle();
    st.display();
    cout << st.get_middle() << endl;
    return 0;
}