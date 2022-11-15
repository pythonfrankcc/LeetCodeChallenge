#include <iostream>
#include<stack>
class Queue
{
public:
    std::stack<int> s1,s2;
    void enQueue(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        //add to the top so that on pushing back it will be at the bottom
        s1.push(x);
        //reason is that Queues add to the bottom
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    int deQueue()
    {
        if(s1.empty())
        {
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
};
int main() {
    Queue test;
    test.enQueue(3);
    test.enQueue(4);
    test.enQueue(5);
    
    std::cout<<test.deQueue();

    return 0;
}