#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int  bin[31],shu[31],judge=1,n,v,ss,minn=1000000,pp;
void plu(int vv)
{
	if(vv == 0)
	{
		judge=0;
		return ;
	}
	bin[vv]++;
	if(bin[vv] == 2)
	{
		bin[vv]=0 ;
		plu(vv-1);
	}
	else
		return;
}
int p()
{
	ss=0;
	for(int ii=1;ii<=v;ii++)
	{
		if(bin[ii] == 1)
			ss += shu[ii];
	}
	return ss;
}
int main()
{
	freopen("dp_1.in","r",stdin);
	scanf("%d%d",&n,&v);
	for(int i=1;i<=v;i++)
		scanf("%d",&shu[i]);
	sort(shu+1,shu+v+1,greater<int>());
	while(judge == 1 )
	{
			pp=p();
			judge=1;
			plu(v);
			if(n>=pp)
				if(minn > (n-pp) )
					minn=n-pp;
			if(pp == n)
				{
					printf("0");
					return 0;
				}
	}
	printf("%d",minn);
	return 0;
}
