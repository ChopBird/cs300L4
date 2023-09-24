#include "deque.h"

void deque::push_front(int n)
{
    if(top == nullptr) {
        top = new Node;
        bot = top;
        top->val = n;
        return;
    }
    Node* node = new Node;
    
    node->val = n;
    node->next = top;
    top->prev = node;
    top = node;
    
}

void deque::push_back(int n)
{
    //if top or bottom are nullptr
    //both are 
    if(top == nullptr) {
        top = new Node;
        bot = top;
        top->val = n;
        return;
    }
    Node* node = new Node;
    node->val = n;
    node->prev = top;
    top->next = node;
    top = node;
}

int deque::pop_front()
{
    if (top == nullptr)
        return 0;
    //get top value and its node pointer
    int front = top->val;
    Node* rem = top;
    //make new top
    top = top->prev;
    //delete old pointer
    delete rem;
    return front;
}

int deque::pop_back()
{
    if (bot == nullptr)
        return 0;
    //get top value and its node pointer
    int back = bot->val;
    Node* rem = bot;
    //make new top
    bot = bot->next;
    //delete old pointer
    delete rem;
    return back;
}

int deque::peak_front()
{
    return top->val;
}

int deque::peak_back()
{
    return bot->val;
}

void deque::remove_all()
{
    Node* del;
    while (top->prev != nullptr){
        del = top;
        top = top->prev;
        delete del;
    }
    delete top;
}

deque::~deque(){
    deque::remove_all();
}
