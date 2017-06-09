#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
int shu[1000],n,v,w,c;
int main()
{
	freopen("dp_2.in","r",stdin);
	scanf("%d%d",&n,&v);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&w,&c);
		for(int j=w;j<=v;j++)
		{
			if((shu[j-w] + c) > shu[j] )
				shu[j] = shu[j-w] + c;
		}
		for(int j=1;j<=v;j++)
			printf("%d ",shu[j]);
		printf("\n");
	}
	return 0;
}
