#include <iostream>

using namespace std;

void m_swap(int *a,int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

}

int main()
{
    int a = 5;
    int b = 6;

    cout << "a = "<<  a  << " b = "<< b << endl;
    cout << "swap a & b" << endl;

    m_swap(&a,&b);
    cout << "a = "<<  a  << " b = "<< b << endl;

}