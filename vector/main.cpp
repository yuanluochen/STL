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

    //赋值

    int arr[] = {0, 1, 2, 3, 4};
    std::vector<int> vecID1;
    std::vector<int> vecID2;
    std::vector<int> vecID3;
    std::vector<int> vecID4;

    //assign 先清空再赋值,不会保存容器原来的参数
    vecID1.assign(arr, arr + 5);

    std::cout << "ID1" << std::endl; 
    for (int i = 0; i < vecID1.size(); i++)
        std::cout << vecID1[i] << " ";
    std::cout << std::endl;

    //用其他容器的迭代器做参数
    vecID2.assign(vecID1.begin(), vecID1.end());
    
    vecID2.assign(vecID1.begin() + 2, vecID1.begin() + 2 + 2);

    std::cout << "ID2" << std::endl;
    for (int i = 0; i < vecID2.size(); i++)
        std::cout<< vecID2[i] << " ";
    std::cout << std::endl;


    vecID3 = vecID2;

    std::cout << "ID3" << std::endl;
    for (int i = 0; i < vecID3.size(); i++)
        std::cout<< vecID3[i] << " ";
    std::cout << std::endl;

    //互换两个容器之间的元素
    vecID4.swap(vecID3);

    std::cout << "ID4" << std::endl;
    for (int i = 0; i < vecID4.size(); i++)
        std::cout<< vecID4[i] << " ";
    std::cout << std::endl;

    //拷贝四个10
    std::vector<int> vecID5;
    vecID5.assign(4, 10);
    
    std::cout << "ID5" << std::endl;
    for (int i = 0; i < vecID5.size(); i++)
        std::cout << vecID5[i] << " ";
    std::cout << std::endl;

    vecID4.swap(vecID5);
    std::cout << "swap ID4" << std::endl;
    for (int i = 0; i < vecID4.size(); i++)
        std::cout << vecID5[i] << " ";
    std::cout << std::endl;

    std::cout << "swap ID5" << std::endl;
    for (int i = 0; i < vecID5.size(); i++)
        std::cout << vecID5[i] << " ";
    std::cout << std::endl;


    return 0;
}