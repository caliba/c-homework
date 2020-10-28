#include<iostream>
using namespace std;

int main()
{
    //以矩阵的形式输入小岛平面图 
    int n;
    int flag=0;
    int count=0;
    cin>>n;
    int area[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>area[i][j];
        }
    }
    // 判断小岛
    for(int i=1;i<n-1;i++)//最边上一定不会是小岛面积的
    {
        for(int j=1;j<n-1;j++)
        {
            if(area[i][j]==0)//可能是小岛面积
            {
                flag=0;
                // 上 
                for(int k=0;k<i;k++)
                {
                    if(area[k][j]==1)//如果上面有墙
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //下
                for(int k=i+1;k<n;k++)
                {
                    if(area[k][j]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //左
                for(int k=0;k<j;k++)
                {
                    if(area[i][k]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //右
                for(int k=j+1;k<n;k++)
                {
                    if(area[i][k]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                // 统计
                if(flag==4)
                {
                    count++;
                }

            }
        }

    }
    cout<<count<<endl;
    return 0;
}