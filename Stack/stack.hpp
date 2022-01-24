#include <iostream>
#include <forward_list>

template <typename T>
class stack
{
private:
    int _m_sp;
    std::forward_list<T> _m_fl;
public:
    stack();
    stack(const stack<T>&);
    ~stack();
public:
    void pop();
    void push(const T&);
    bool empty() const;
    int  size() const;
    const T& top() const;
    void swap(stack<T>&);
};
