#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Deque
{
    int front;
    int rear;
    int *arr;
    int size;
    int val;

public:
    Deque(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    bool isfull();
    bool isempty();
    void insert_front(int x);
    void insert_rear(int x);
    int delete_front();
    int delete_rear();
    int get_front();
    int get_rear();
};
bool Deque::isfull()
{
    if (front == (rear + 1) % size)
        return true;
    return false;
}
bool Deque::isempty()
{
    if (front == -1)
        return true;
    return false;
}
void Deque::insert_front(int x)
{
    if (isfull())
    {
        cout << "overflow condition,element cannot be added " << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
        arr[front] = x;
    }
    else if (front == 0)
    {
        front = size - 1;
        arr[front] = x;
    }
    else
    {
        front = front - 1;
        arr[front] = x;
    }
}
void Deque::insert_rear(int x)
{
    if (isfull())
    {
        cout << "overflow condition,element cannot be added " << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
        arr[front] = x;
    }
    else if (rear == size - 1)
    {
        rear = 0;
        arr[rear] = x;
    }
    else
    {
        rear++;
        arr[rear] = x;
    }
}
int Deque::delete_front()
{
    if (isempty())
    {
        cout << " undeflow condition " << endl;
        return -1;
    }
    if (front == rear)
    {
        val = arr[front];
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        val = arr[front];
        front = 0;
    }
    else
    {
        val = arr[front];
        front++;
    }
    return val;
}
int Deque::delete_rear()
{
    if (isempty())
    {
        cout << " undeflow condition " << endl;
        return -1;
    }
    if (front == rear)
    {
        val = arr[front];
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        val = arr[rear];
        rear = size - 1;
    }
    else
    {
        val = arr[rear];
        rear--;
    }
    return val;
}
int Deque::get_front()
{
    if (isempty())
    {
        cout << " undeflow condition " << endl;
        return -1;
    }
    return arr[front];
}
int Deque::get_rear()
{
    if (isempty())
    {
        cout << " undeflow condition " << endl;
        return -1;
    }
    return arr[rear];
}
int main()
{
    Deque dq(5);
    dq.insert_front(34);
    dq.insert_rear(12);
    cout << dq.get_front() << endl;
    cout << dq.get_rear() << endl;
    cout << dq.delete_front() << endl;
    cout << dq.delete_rear() << endl;
    cout << dq.delete_rear() << endl;
    return 0;
}