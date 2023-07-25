#include <iostream>
#include <vector>


int main()
{

    //有参构造

    // int arr[] = {1, 2, 3, 4, 5};
    // std::vector<int> vec1(arr, arr + 5);

    // std::vector<int> vec2(3, 10);
    // // for (int i = 0; i < 3; i++)
    // //     std::cout << vec2[i] << " ";
    // // std::cout << std::endl;

    // std::vector<int> vec3(vec1);

    // std::vector<int> vec4 = vec1;

    // for (int i = 0; i < 5; i++)
    //     std::cout << vec3[i] << " ";
    // std::cout << std::endl;

    // //赋值

    // int arr[] = {0, 1, 2, 3, 4};
    // std::vector<int> vecID1;
    // std::vector<int> vecID2;
    // std::vector<int> vecID3;
    // std::vector<int> vecID4;

    // //assign 先清空再赋值,不会保存容器原来的参数
    // vecID1.assign(arr, arr + 5);

    // std::cout << "ID1" << std::endl; 
    // for (int i = 0; i < vecID1.size(); i++)
    //     std::cout << vecID1[i] << " ";
    // std::cout << std::endl;

    // //用其他容器的迭代器做参数
    // vecID2.assign(vecID1.begin(), vecID1.end());
    
    // vecID2.assign(vecID1.begin() + 2, vecID1.begin() + 2 + 2);

    // std::cout << "ID2" << std::endl;
    // for (int i = 0; i < vecID2.size(); i++)
    //     std::cout<< vecID2[i] << " ";
    // std::cout << std::endl;


    // vecID3 = vecID2;

    // std::cout << "ID3" << std::endl;
    // for (int i = 0; i < vecID3.size(); i++)
    //     std::cout<< vecID3[i] << " ";
    // std::cout << std::endl;

    // //互换两个容器之间的元素
    // vecID4.swap(vecID3);

    // std::cout << "ID4" << std::endl;
    // for (int i = 0; i < vecID4.size(); i++)
    //     std::cout<< vecID4[i] << " ";
    // std::cout << std::endl;

    // //拷贝四个10
    // std::vector<int> vecID5;
    // vecID5.assign(4, 10);
    
    // std::cout << "ID5" << std::endl;
    // for (int i = 0; i < vecID5.size(); i++)
    //     std::cout << vecID5[i] << " ";
    // std::cout << std::endl;

    // vecID4.swap(vecID5);
    // std::cout << "swap ID4" << std::endl;
    // for (int i = 0; i < vecID4.size(); i++)
    //     std::cout << vecID4[i] << " ";
    // std::cout << std::endl;

    // std::cout << "swap ID5" << std::endl;
    // for (int i = 0; i < vecID5.size(); i++)
    //     std::cout << vecID5[i] << " ";
    // std::cout << std::endl;


    // // vector 容器的大小

    // std::vector<int> v1;
    // std::cout << "v1.size: " << v1.size() << std::endl;

    // if (v1.empty()) //判断容器是否为空
    // {
    //     std::cout << "v1 is empty" << std::endl;
    // }

    // int array[5] = {0, 1, 2, 3, 4};

    // v1.assign(array, array + 5);
    
    // std::cout << "v1.size: " << v1.size() << std::endl;

    // if (!v1.empty())
    // {
    //     std::cout << "v1 is not empty" << std::endl;
    // }

    // //将容器的长度变长
    // v1.resize(10);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1[i] << " ";
    // std::cout << std::endl;

    // //变短
    // v1.resize(3);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1[i] << " ";
    // std::cout << std::endl;

    // v1.resize(10, 100);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1[i] << " ";
    // std::cout << std::endl;

    // // 访问

    // int a[] = {1, 2, 3, 4};
    // std::vector<int> v1(a, a + 4);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1[i] << " ";
    // std::cout << std::endl;
    // // //如果下标越界可能会导致程序异常终止
    // // // v1[5] = 100;

    // // // v1.at(8) = 100;
    // // v1.at(1) = 100;
    // // // v1.at(8) = 1000;


    // //插入
    // //尾部插入
    // v1.push_back(10);
    // v1.push_back(11);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;

    // //删除末尾的一个元素
    // v1.pop_back();
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;

    // //在指定的位置插入一个指定的元素
    // v1.insert(v1.begin() + 3, 100);//注意第一个参数不能为下标应该为指针
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;

    // v1.insert(v1.begin() + 3, 3, 1000); //在下标为3的位置插入3个1000
    // for (int i = 0; i < v1.size(); i++) 
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;

    // int b[] = {5, 6, 7, 8, 9, 102};
    // //insert 区间左闭右开 6, 7, 8 b + 1, b + 4
    // v1.insert(v1.begin() + 4, b + 1, b + 4);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;

    // std::vector<int> v2(b, b + 6);
    // v1.insert(v1.begin() + 1, v2.begin() + 1, v2.end() - 1);
    // for (int i = 0; i < v1.size(); i++)
    //     std::cout << v1.at(i) << " ";
    // std::cout << std::endl;


    // //iterator
    // std::vector<int> vecA;
    // int arrary[] = {0, 1, 20, 30, 40};

    // std::vector<int> vecB;
    // vecA.assign(arrary, arrary + 5);

    // std::cout << vecA.at(3) << std::endl;

    //iterator

    return 0;
}