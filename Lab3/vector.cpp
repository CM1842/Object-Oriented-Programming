#include <iostream>
#include <vector>
using namespace std;

void printMemVec(vector<int> v)
{
    printf("Vector - Each int is worth %lu bytes \n", sizeof(v));
    for(int i = 0; i < v.size(); i++)
    {
        printf("Value: %i at Memory Location: %p\n", v[i], &v + i);
    }
}

void incVecBy10(vector<int> & v)
{
    for(int i = 0; i< v.size(); i++ )
    {
        v[i] += 10;
    }
}

int main()
{   
    vector<int> vTest;
    const int SIZE = 5;
    for(int i = 0; i < SIZE; i++)
    {
        vTest.push_back(100 + i);
    }
    printf("Before --------------\n");
    printMemVec(vTest);

    //change the value
    incVecBy10(vTest);
    printf("After -----------------\n");
    printMemVec(vTest);

    //change the value
    vTest.pop_back();
    vTest.push_back(300);
    vTest.push_back(301);
    printf("After -----------------\n");
    printMemVec(vTest);
}