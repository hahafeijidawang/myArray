#include <iostream>

#include "MyArray.h"
using namespace std;

   myArray::myArray(int length){

        if(length<0){

            length = 0;


        }
            m_length = length;

            m_space  = new int [m_length];

   }

   int myArray::length(){

       return m_length;


   }

    myArray::myArray(const myArray& obj){

        m_length= obj.m_length;

         m_space  = new int[this->m_length];//分配内存空间深拷贝。

        for(int i=0;i<m_length;i++){

            m_space[i]=obj.m_space[i];


        }


    }
    myArray::~myArray(){

        if(m_space!=NULL){


            delete [] m_space;

            m_length = 0;


        }



    }

    void myArray::setData(int index,int valude){


        m_space[index] = valude;

    cout<<valude<<endl;
    }

    int myArray::getData(int index){

        return m_space[index];


    }
    //函数返回值当左值，需要返回一个引用
    //应该返回一个引用（元素本身） 而不是一个值。
    int& myArray::operator [](int i){

        return m_space[i];

    }

