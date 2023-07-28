#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    std::queue<int> q2(q1); // 调用拷贝构造
    std::queue<int> q3;//调用默认构造


    while (q1.empty() == false)
    {
        std::cout << q1.front() << std::endl;
        q1.pop();
    }

    while (q2.empty() == false)
    {
        std::cout << q2.front() << std::endl;
        q2.pop();
    }



    return 0;
}