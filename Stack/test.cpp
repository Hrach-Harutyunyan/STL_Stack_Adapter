#include "implementation.cpp"
#include <array>

int main() {

    stack<int> st;
    const int size = 5;
    std::array<int,5> arr;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int> st2(st);

    return 0;
}