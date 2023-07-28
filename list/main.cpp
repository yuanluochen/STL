#include <iostream>
#include <list>

//list 是一个双向链表容器，可高效地进行插入删除元素
//list 不可以随机存取元素，所以不支持at.(pos)函数或[]操作符
//it++ (ok)
//it+5 (error)
int main()
{
    // std::list<int> lst;
    // lst.push_back(10);
    // lst.push_front(20);

    // std::list<int>::iterator it;
    
    // for (it = lst.begin(); it != lst.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;

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
    // int x = lst.front();
    // std::cout << "front:" << x << std::endl;

    // x = lst.front();
    // std::cout << "front:" << x << std::endl;

    // //返回最后一个结点
    // int y = lst.back();
    // std::cout << "back:" << y << std::endl;

    // lst.front() = 100;
    // lst.back() = 200;

    // for (it = lst.begin(); it != lst.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;

    // std::list<int>::reverse_iterator it1;
    // for (it1 = lst.rbegin(); it1 != lst.rend(); it1++)
    //     std::cout << *it1 << " ";
    // std::cout << std::endl;

    // std::list<int> lst(3, 5); //构造对象时将容器中的元素初始化成3个5
    // std::list<int> lst2 = {1, 2, 3, 4};
    // lst2.push_back(1);
    // lst2.push_back(2);
    // lst2.push_back(3);
    // lst2.push_back(4);
    // lst2.push_back(5);
    

    // // lst.assign(3, 6);
    // // lst.assign(lst2.begin(), lst2.end());
    // // lst.swap(lst2);
    // std::list<int>::iterator it;

    // for (it = lst.begin(); it != lst.end(); it++) 
    //     std::cout << *it << " ";
    // std::cout << std::endl;

    // // std::list<int> lst2(lst.begin(), lst.end());
    // std::cout << "lst2.size: " << lst2.size() << std::endl;
    // std::cout << "empty?" << lst2.empty() << std::endl;

    // lst2.resize(lst2.size() + 3, 100);
    // std::cout << "lst2.size: " << lst2.size() << std::endl;

    // for (it = lst2.begin(); it != lst2.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;

    // lst2.resize(lst2.size() - 3);
    
    // for(it = lst2.begin(); it != lst2.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    
    // std::list<int>::iterator it2 = lst2.begin();

    // it2++;
    // lst2.insert(it2, 10);

    // for (it = lst2.begin(); it != lst2.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;

    // for (it2 = lst2.begin(); it2 != lst.end(); it2++)
    // {
    //     if (*it2 == 10)
        
    //     break;
    // }
    // if (it2 != lst2.end())//找到30
    // {
    //     lst2.insert(it2, 50);
    // }
    // lst2.insert(it2, 3, 100);
    // lst2.insert(it2, lst.begin(), lst.end());
    // lst2.erase(it2);
    // for (it2 = lst2.begin(); it2 != lst2.end(); it2++)
    //     std::cout << *it2 << " ";
    // std::cout << std::endl;
    
    // std::list<int>::iterator it4 = lst2.begin();
    // it4++;
    // it4++;

    // std::list<int>::iterator it3 = it4;
    // for (int i = 0; i < 4; i++)
    //     it4++;
    // lst2.erase(it3, it4);

    // for (it3 = lst2.begin(); it3 != lst2.end(); it3++)
    //     std::cout << *it3 << " ";
    // std::cout << std::endl;

    // //删除所有的5
    // lst2.remove(5);
    // for (it3 = lst2.begin(); it3 != lst2.end(); it3++)
    //     std::cout << *it3 << " ";
    // std::cout << std::endl;

    // //清空容器
    // // lst2.clear();
    // // std::cout << "enpty:" << lst2.empty() << std::endl;

    // // 反转list容器
    // lst2.reverse();
    // for (it3 = lst2.begin(); it3 != lst2.end(); it3++)
    //     std::cout << *it3 << " ";
    // std::cout << std::endl;
    // return 0;
    std::list<int> ls = {1, 2, 3, 4, 5, 6, 3, 3, 4};
    std::list<int>::iterator it = ls.begin();
    // for (it = ls.begin(); it != ls.end(); it++)
    // {
    //     if (*it == 3)
    //     {
    //         it = ls.erase(it);//it失效了无法循环
    //         // std::cout << "it: " << *it << std::endl;
    //         // std::cout << "it2: " << *it2 << std::endl;
    //     }
    // }

    for (std::list<int>::iterator it2 = ls.begin(); it2 != ls.end();)
    {
        if (*it2 == 3)
            it2 = ls.erase(it2);
        else 
            it2++;
    }

    for (it = ls.begin(); it != ls.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;

}