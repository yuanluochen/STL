#include <iostream>
#include <list>

//list 是一个双向链表容器，可高效地进行插入删除元素
//list 不可以随机存取元素，所以不支持at.(pos)函数或[]操作符
//it++ (ok)
//it+5 (error)
int main()
{
    std::list<int> lst;
    lst.push_back(10);
    lst.push_front(20);

    std::list<int>::iterator it;
    
    for (it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    //删除尾部结点
    // lst.pop_back();
    
    // for (it = lst.begin(); it != lst.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    // //删除头部结点
    // lst.pop_front();

    // for (it = lst.begin(); it != lst.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    
    //返回第一个结点
    int x = lst.front();
    std::cout << "front:" << x << std::endl;

    x = lst.front();
    std::cout << "front:" << x << std::endl;

    //返回最后一个结点
    int y = lst.back();
    std::cout << "back:" << y << std::endl;

    lst.front() = 100;
    lst.back() = 200;

    for (it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;


    return 0;
}