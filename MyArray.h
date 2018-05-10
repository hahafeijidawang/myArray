#pragma once

#include<iostream>

using namespace std;

class myArray{

public:

    myArray(int length);

    myArray(const myArray& obj);

    ~myArray();

public:
    void setData(int index,int values);

    int getData(int index);

    int length();

    int& operator [](int i);
private:
    int m_length;

    int *m_space;
};
