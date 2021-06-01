#include<iostream>
using namespace std;

int main()
{
    cout<<"输入两个整数："<<endl;
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        while(a<=b)
        {
            cout<<a++<<" ";
        }
    }
    else
    {
        while(b<=a)
        {
            cout<<b++<<" ";
        }
    }
    system("pause");
    return 0;
}