#include<bits/stdc++.h>
using namespace std;
int factorial(int num);
int main()
{
    int num,count=0,fact=1,rem;
    cout<<"Enter the number: ";
    cin>>num;

    //Factorial of that number..
    
fact=factorial(num);
    //Counting the number of zeros..
    while(fact>0)
    {
        rem=fact%10;
        if(rem==0)
        {
            count++;
        }
        fact/=10;
    }
    cout<<"The number of zeros are: "<<count;
}
int factorial(int num)
{
 if(num==0)
 return 1;
 if(num>=1)
 return num*factorial(num-1);
}
