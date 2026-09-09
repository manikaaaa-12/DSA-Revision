#include<bits/stdc++.h>
using namespace std;
class MinStack{
    private:
    stack<int> st;
    stack<int> minSt;

    public:
    void push(int val){
        st.push(val);
        if(minSt.empty()|| val<=minSt.top()){
            minSt.push(val);
        }
    }
    void pop(){
        if(st.empty())
        return;
        if(st.top()==minSt.top()){
            minSt.pop();
        }
        st.pop();
    }
    int top(){
        if(st.empty())
        return -1;
        return minSt.top();
    }
    int getMin(){
        if(minSt.empty())
        return -1;
        return minSt.top();
    }
};
int main(){
    MinStack st;
    st.push(-2);
    st.push(0);
    st.push(-3);
    cout<<"Minimum:"<<st.getMin()<<endl;
    st.pop();
    cout<<"Top:"<<st.top()<<endl;
    cout<<"Minimum:"<<st.getMin()<<endl;
    return 0;
}