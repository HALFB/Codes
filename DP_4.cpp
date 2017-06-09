#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

int shu[1000],n,k,v,w,c,t,j,ss;
struct a{
	int w[100],c[100];
}kind[100];
int main()
{
	freopen("dp_4.in","r",stdin);
	scanf("%d%d",&k,&v);
	for(int kk=1; kk <=k ;kk++)
	{
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			scanf("%d%d",&kind[kk].w[i],&kind[kk].c[i]);
		for(int i=v;i>=1;i--)
		{
			for(int j=1;j<=t;j++)
			{
				if(i-kind[kk].w[j] >= 0)
				{
				ss= shu[i-kind[kk].w[j]] + kind[kk].c[j];
				if( ss > shu[i])
					shu[i] = ss;
			}
			}
		}
		for(int i=1;i<=v;i++)
			printf("%d ",shu[i]);
		printf("\n");
	}
	return 0;
	
}
