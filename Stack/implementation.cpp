#include "stack.hpp"

template <typename T>
stack<T>::stack() : _m_sp(0),_m_max_size(100) {};

template <typename T>
stack<T>::stack(const stack& st) {
    this->_m_fl = st._m_fl ;
    this->_m_sp = st._m_sp ;
    
};

template <typename T>
stack<T>::~stack() {};

template <typename T>
void stack<T>::push(const T& value) {
    try{
        if(_m_sp < 100) {
            _m_fl.push_front(value);
            ++_m_sp;
        }else {
            throw std::exception();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << "\t'Stack is full!'\n";
}

template <typename T>
void stack<T>::pop() {
    try {
        if(!_m_fl.empty()) {
            _m_fl.pop_front();
            --_m_sp;
        } else {
            throw  std::exception();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << "\t'No element in stack'\n";
    }
    
}

template <typename T>
int stack<T>::size()const {
    return _m_sp;
}

template <typename T>
bool stack<T>::empty()const {
    return !_m_sp;
}

template <typename T>
const T& stack<T>::top() const {
    if(!_m_fl.empty()) {
        return _m_fl.front();
    }
}

template <typename T>
void stack<T>::swap(stack<T>& st) {
    _m_fl.swap(st._m_fl);
}
