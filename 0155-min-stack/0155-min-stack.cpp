class MinStack {
    stack<int>st;
    vector<int>mini;
  
public:
    MinStack() {
   
    }
    
    void push(int value) {
     
     st.push(value);
     if(mini.empty()){
    mini.push_back(value);
    }
    else{
    mini.push_back(min(value, mini.back()));
}
    }
    
    void pop() {
        
      
        st.pop();
        mini.pop_back();
    }
    
    int top() {
      
    return  st.top(); }
    
    int getMin() {
 
    return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */