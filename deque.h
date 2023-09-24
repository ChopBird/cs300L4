
#ifndef deque_h
#define deque_h
class deque{
    
private:
// top <--next prev->>bot
struct Node
{
    Node* prev = nullptr;
    int val;
    Node* next = nullptr;
};


Node* bot = nullptr ;
Node* top = nullptr;

public:


void push_front(int n);
void push_back(int n);
int pop_front();
int pop_back();
int peak_front();
int peak_back();
void remove_all();

~deque();
};
#endif