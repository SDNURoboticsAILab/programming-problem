#include<stdio.h>
int main()
{
	int k,sum=0;
	scanf("%d",&k);
	int d=0;
	for(int i=1;d<k;i++){
		for(int j=1;j<=i&&d<k;j++){
			sum+=i;
			d++;
			}
		}
			if(d==k){
				printf("%d",sum);
			}
			return 0;
}
