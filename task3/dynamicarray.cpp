#include <iostream>
#include <ctime>

using namespace std;

/*
    Work with dynamic array
*/

void fill_array(int* const array, const int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % (2 * size);
    }
}

void show_array(const int* const array, const int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " "; 
    }
    cout << endl;
}

void copy_array(const int* const src, int* const dest, const int size){
    for (int i = 0; i < size; i++){
        dest[i] = src[i];
    }
}

// dummy realization. Increase only by 1
void push_back(int *&arr, int &size, const int value){
    int *newArray = new int[size + 1];

    copy_array(arr, newArray, size);
    newArray[size] = value;

    delete[] arr;
    arr = newArray;
    size += 1;
}

void pop_back(int *&arr, int &size){
    size -= 1;
    int *newArray = new int[size];
    copy_array(arr,newArray,size);
    delete[] arr;
    arr = newArray;
}

int main()
{
    srand(time(nullptr));

    int size;
    cout << "Input size of array: ";
    cin >> size;

    int *arr = new int[size];
    fill_array(arr,size);
    show_array(arr,size);

    int *arrCopy = new int[size];
    copy_array(arr,arrCopy,size);
    show_array(arrCopy, size);

    int newSize = size;
    push_back(arr,newSize,1000);
    show_array(arr,newSize);

    pop_back(arrCopy,size);
    show_array(arrCopy,size);

    delete[] arr;
    delete[] arrCopy;
}
