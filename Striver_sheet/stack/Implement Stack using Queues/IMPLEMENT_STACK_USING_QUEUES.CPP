#include<bits/stdc++.h>
class MyStack {
public:
    queue <int> q;    
    MyStack() {        
    }    
    void push(int x) {
        q.push(x);
    }   
    int pop() {
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        int t=q.front();
        q.pop();
        return t;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};
