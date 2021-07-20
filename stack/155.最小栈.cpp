/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

#include <map>
#include <stack>

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int val) {
        data_.push(val);
        if(minval.empty() || val <= getMin()) minval.push(val);
    }
    
    void pop() {
        if(data_.top()==getMin()) minval.pop();
        data_.pop();
    }
    
    int top() {
        return data_.top();
    }
    
    int getMin() {
        return minval.top();
    }

private:
    // std::vector<int> data_;
    std::stack<int> data_;
    std::stack<int> minval;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

