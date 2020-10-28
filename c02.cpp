#include<iostream>
using namespace std;

struct student
{
    char name[16];
    int score;
}stu[50],temp;

int main()
{
    int n;
    cin>>n;
    // 输入
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].score;
    }
    // 从小到大排序
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
            if(stu[j].score<stu[j+1].score)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
    }
    // 输出
    for(int i=0;i<n;i++)
    {
        // printf("%15s%5d\n",stu[i].name,stu[i].score);
        cout.width(15);
        cout.fill(' ');
        cout<<stu[i].name;
        cout.width(5);
        cout.fill(' ');
        cout<<stu[i].score;
        cout<<endl;
    }
      
}