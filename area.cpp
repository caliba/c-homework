#include<iostream>
using namespace std;

int main()
{
    //�Ծ������ʽ����С��ƽ��ͼ 
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
    // �ж�С��
    for(int i=1;i<n-1;i++)//�����һ��������С�������
    {
        for(int j=1;j<n-1;j++)
        {
            if(area[i][j]==0)//������С�����
            {
                flag=0;
                // �� 
                for(int k=0;k<i;k++)
                {
                    if(area[k][j]==1)//���������ǽ
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //��
                for(int k=i+1;k<n;k++)
                {
                    if(area[k][j]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //��
                for(int k=0;k<j;k++)
                {
                    if(area[i][k]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                //��
                for(int k=j+1;k<n;k++)
                {
                    if(area[i][k]==1)
                    {
                        flag=flag+1;
                        break;
                    }
                }
                // ͳ��
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