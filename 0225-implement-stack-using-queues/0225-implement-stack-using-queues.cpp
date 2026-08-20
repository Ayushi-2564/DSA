class MyStack {
       queue<int>q1;
    //    queue<int>q2;
public:
    MyStack() {
       queue<int>q1;
    //    queue<int>q2; 
    }
    
    void push(int x) {
    // q2.push(x);
    // while(!q1.empty()){
    //     q2.push(q1.front());
    //     q1.pop();
    // }
    //  swap(q1,q2);   
    // 
    
    q1.push(x);
    //while(q1.front()!=x) in this condition we cant find which one is new element and which is old
    int n=q1.size();
    for(int i =0;i<n-1;i++)
    {
        q1.push(q1.front());
        q1.pop();
    }
    }
    
     int pop() {
    // int ans=  q1.front();
    // q1.pop();
    // return ans;
    int ans=q1.front();
    q1.pop();
    return ans;
    }
    
    int top() {
    // return q1.front(); 
    return q1.front();  
    }
    
    bool empty() {
    //   if(q1.empty())return true;
    //   else return false; 
    if(q1.empty())return true;
    else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */