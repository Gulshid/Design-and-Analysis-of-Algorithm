#include<iostream>
using namespace std;

int main()
{
    int array_sort[] = {20,15,3,5,11,2,19};
    int size_array = 7;
    
    for (int o = 0; o < size_array; o++)
    {
        for (int p = o + 1; p < size_array; p++)
        {
            if ( array_sort[o] > array_sort[p])
            {
                int temp = array_sort[o];
                array_sort[o] = array_sort[p];
                array_sort[p] = temp;
            }
        }
    }


    for (int m = 0;  m < size_array; m++)
    {
        cout<<array_sort[m]<<" ";
    }
}