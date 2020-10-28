#include<iostream>
using namespace std;
int main()
{
    int a[19][19];
    int res=0;
    // 输入
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            cin>>a[i][j];
        }
    }
    // 判断是否有人获胜
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            if(a[i][j]!=0)//没人下棋
            {
                // 判断行
                if(i+4<19)
                {
                    if((a[i][j]==a[i+1][j])&&(a[i][j]==a[i+2][j])&&(a[i][j]==a[i+3][j])&&(a[i][j]==a[i+4][j]))
                    {
                        cout<<a[i][j]<<":"<<i+1<<","<<j+1<<endl;
                        res =1;
                        break;
                    }
                }
                // 判断列
                if(j+4<19)
                {
                    if((a[i][j]==a[i][j+1])&&(a[i][j]==a[i][j+2])&&(a[i][j]==a[i][j+3])&&(a[i][j]==a[i][j+4]))
                    {
                        cout<<a[i][j]<<":"<<i+1<<","<<j+1<<endl;
                        res =1;
                        break;
                    }
                }
                //判断斜
                if((j+4<19)&&(i+4<19))
                {
                    if((a[i][j]==a[i+1][j+1])&&(a[i][j]==a[i+2][j+2])&&(a[i][j]==a[i+3][j+3])&&(a[i][j]==a[i+4][j+4]))
                    {
                        cout<<a[i][j]<<":"<<i+1<<","<<j+1<<endl;
                        res =1;
                        break;
                    }
                }
                // 判断斜
                if((j-4>=0)&&(i+4<19))
                {
                    if((a[i][j]==a[i+1][j-1])&&(a[i][j]==a[i+2][j-2])&&(a[i][j]==a[i+3][j-3])&&(a[i][j]==a[i+4][j-4]))
                    {
                        cout<<a[i][j]<<":"<<i+1<<","<<j+1<<endl;
                        res =1;
                        break;
                    }
                }
            }
        }
    }
    if(res==0)
    {
        cout<<"No"<<endl;
    }
    return 0;
}