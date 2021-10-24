#include<iostream>
using namespace std ;
long long x , y , a=0  ;
int main()
{
cin >> x;
while (x>0)
{
    y = x %10 ;
    if (y==4 || y == 7 )
        a++ ;
    x = x/10;
}
if(a==4||a==7||a==47||a==74||a==44)
    cout << "YES ";
else cout << "NO";
}
