#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool f1()
{
    stack<char>s1;
    string s="wowoww";
    for(auto x:s)
        s1.push(x);
    
    string p="";
    int l=s1.size();
    for(int i=0;i<l;i++)
    {
        p=p+s1.top();
        s1.pop();
    }
    if(s==p)
        return true;
    else
        return false;

    

    
    
}
void f2()
{
    stack<string>s1;
    s1.push("vivek");
    s1.push("irfan");
    s1.push("manu");
    s1.push("chiru");
    s1.push("tarun");
    s1.push("akshat");
    cout<<s1.size()<<" "<<s1.top()<<endl;
    stack<string>s2;
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout<<s2.size()<<" "<<s2.top();
}
void f4()
{
    stack<string>s1;
    s1.push("vivek");
    s1.push("irfan");
    s1.push("manu");
    s1.push("chiru");
    s1.push("tarun");
    

}
int main()
{
    f2();
}