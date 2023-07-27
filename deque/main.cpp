#include <iostream>
#include <deque>

int main()
{
    // std::deque<int>::iterator it;
    std::deque<int> d = {10, 20, 30, 40};
    d.push_front(100);

    std::deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); it++)   
        std::cout << *it << " ";
    std::cout << std::endl;

    d.pop_front();

    for (it = d.begin(); it != d.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl; 
    
    d.erase(d.begin() + 2);
    for (it = d.begin(); it != d.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

}