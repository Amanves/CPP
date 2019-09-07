#include<stdio.h>
int main()
{
	int a[10],i,n,p,x;
	printf("Enter size of an array");
	scanf("%d",&n);
	printf("Enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position to be inserted");
	scanf("%d",&p);
	printf("Enter element to be inserted");
	scanf("%d",&x);
	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=x;
	for(i=0;i<=n;i++)
	{
		printf("&d",a[i]);
}
}

