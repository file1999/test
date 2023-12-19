#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int findInteger(char*p,int*a)
{
	int j,n=0,i,k;
	char temp[100];
	for(i=0;p[i]!='\0';i++)
	{
		j=0;
		while(p[i]>='0'&&p[i]<='9')
		{
			temp[j]=p[i];
			j++;
			i++; 
		}
		if(j!=0)
		{
			*a=atoi(temp);
			a++;
			n++;
			for(k=0;k<j;k++)
			temp[k]=0;
			i--;
		}
	}
	return n;
}
int main() 
{
	int i,m,a[100];
	char line[100];
	cout<<"请输入一个字符串："<<endl;
	gets(line) ;
	m=findInteger(line,a);
	cout<<"字符串共有：" <<m<<"个整数" <<endl;
	for(i=0;i<m;i++) 
	cout<<setw(8)<<a[i];
	cout<<endl;
	system("pause");
	return 0;
}
