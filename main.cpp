// C++ program to calculate pow(x,n)
#include<iostream>
using namespace std;
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

/* Driver code */
int main()
{
    int x,y,d;
    cout<<"enter value of x,y and d\n";
    cin>>x>>y>>d;

    cout << power(x, y)%d;
    return 0;
}
