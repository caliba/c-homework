#include<iostream>
using namespace std;
int fact(int n)
{
    int sum=1;
    for(int i=n;i>=1;i--)
    {
        sum=sum*i;
    }
    return sum;
}

int main()
{
    int num;
    int total[200000];
    int num_copy;
    cin>>num;
    num_copy=num;
    int count=0;
    int sum=0;
    int temp=0;
     cout<<num<<",";
    while (num!=0)
    {
       temp=num%10;
       num=num/10;
       total[count]=temp;
       count++;
       sum+=fact(temp);
    }
    for (int i = count-1; i>=0; i--)
    {
        if(i!=0)
        {
            cout<<total[i]<<"!+";
        }
        else
        {
            cout<<total[i]<<"!=";
        }
    }
    cout<<sum<<endl;
    




    if(sum==num_copy)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}