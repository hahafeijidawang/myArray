#include <iostream>

#include "MyArray.h"

using namespace std;

int main()
{
    myArray a1(20);

    for(int i=0;i<a1.length();i++){

        a1[i]=i;//当左值，要用引用

    }
    for(int i=0;i<a1.length();i++){

        a1.getData(i);

    }
    //拷贝构造函数

    myArray a2=a1;

    cout<<"output a2"<<endl;

    for(int i=0;i<a2.length();i++){

        cout<<a2[i]<<""<<endl;

    }





    system("pause");



    return 0;

}

