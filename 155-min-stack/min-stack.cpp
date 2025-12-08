class MinStack {
public:
   stack<pair<int,int>> v;
   int minn=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
      
      if(v.empty())
      {
       v.push({val,val});
      }
      else
      {
       int a=min(val,getMin());
v.push({val,a});
      }

      
    }
    
    void pop() {
       if(!v.empty())
       {
        v.pop();
       }
       
    }
    
    int top() {
       return v.top().first; 
    }
    
    int getMin() {
        return v.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */