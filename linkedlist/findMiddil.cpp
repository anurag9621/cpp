#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void insert(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
void findmid(){
    Node *p, *q;
    p = first;
    q = first;
    while(p->next!=NULL){
        q = q->next;
        p = p->next;
        if(p->next){
            p = p->next;
        }
    }
    cout << q->data;
}
int main(){
    insert(0, 10);
    insert(1, 20);
    insert(2, 30);
    insert(3, 40);
    insert(4, 50);
    insert(5, 60);
    insert(6, 70);
    insert(7, 80);
    insert(8, 90);
    insert(9, 100);
    insert(10, 110);
    insert(11, 120);

    findmid();
}