#include <iostream>
using namespace std;

class DynamicArray{
public:
    int size;
    int capcity = 10;
    int* arr;
};

DynamicArray::DynamicArray(){
    this->arr = new int[Capacity];
}

DynamicArray::DynamicArray(int Capacity){
    this->capcity = Capacity;
    this->arr = new int[Capacity];
}