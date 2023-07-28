#include <iostream>
#include <stack>

int main()
{   
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    std::stack<int> st1 = st;
    while (st.empty() == false)
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }


    while(st1.empty() == false)
    {
        std::cout << st1.top() << std::endl;
        st1.pop();
    }
    
    std::cout << st1.size() << std::endl;

    return 0;
}