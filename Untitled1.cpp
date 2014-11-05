
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i;
    double a,b;
    for(i=1;i<101;i++)
    {
    cout<<i;
    a=i%3;
    b=i%5;
    if(i%3==0&&i%5==0)
    {cout<<" AnonymousLlama";}
    else if(i%3==0 )
    {cout<<" Anonymous";}
    else if(i%5==0 )
    {cout<<" Llama";}
    cout<<endl;
    }
    system("pause");
}
