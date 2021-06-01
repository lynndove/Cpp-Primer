#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book;
    while(cin>>book)
    {
        cout<<book<<" ";
    }
    system("pause");
    return 0;
}