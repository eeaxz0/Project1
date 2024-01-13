#include <iostream>

using namespace std;

int main()
{ int a,b,c,k1=0, k2=0;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
if (a%2==0)
    k1=k1+1;
else
    k2=k2+1;
if (b%2==0)
    k1=k1+1;
else
    k2=k2+1;
if (c%2==0)
    k1=k1+1;
else
    k2=k2+1;
if (k1>k2)
    cout<<"Sunt mai multe numere pare.";
else
    cout<<"Sunt mai multe numere impare.";
return 0;
}
