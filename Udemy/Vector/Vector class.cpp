//Vector class
#include <iostream>

using namespace std;
class Vector{
    int cs; //current size
    int ms; //max size
    int *arr;
    public:
    Vector(int max_size=1)
    {
        cs=0;
        ms=max_size;
        arr = new int[ms];
    }
    void push_back(int element)
    {
        //If vector is full then size of vector = 2*current_size
        if(cs==ms)
        {
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
        }
        arr[cs] = element;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    bool isEmpty()
    {
        return cs != ms;
    }
    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs-1];
    }
    int at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
};
int main()
{
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Size of arr "<<v.size()<<endl;
    cout<<"Capacity of arr "<<v.capacity();
    return 0;
}
