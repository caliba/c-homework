#include<iostream>
using namespace std;
int main()
{
    char a;
    int max=0;
    int fre[27];
    int count=0;
    int temp=0;
    for (int i = 0; i < 27;i++)
    {
        fre[i]=0;
    }
    while (cin>>a)
    {
        if(a>='a'&&a<='z')//如果是小写字母,则统计次数
        {
            fre[a-'a']++;
        }
    }
    max=fre[0];
    for(int i=0;i<26;i++)//求出最大的出现次数,和一共有几个小写字母出现
    {
        if(max<fre[i])
        {
            max=fre[i];
        }
        if(fre[i]!=0)
        {
            count++;
        }
    }
    // 排序
    for(int i=0; i<26-1; i++)
    {
        for(int j=0; j<26-1-i; j++)
        {
            if(fre[j] < fre[j+1]){
                temp = fre[j];
                fre[j] = fre[j+1];
                fre[j+1] = temp;
            }
        }
    }
    //构造矩阵
    int res[max][count];
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<count;j++)
        {
            if(fre[j]>0)
            {
                res[i][j]='#';
                fre[j]--;
            }
            else
            {
                res[i][j]=' ';
            }
        }
    }
// 排序输出
    for(int i=max-1;i>=0;i--)
    {/*倒着输出*/
        for(int j=0;j<count;j++)
    {
        printf("%c",res[i][j]);
    }
        printf("\n");
    }

    return 0;
}