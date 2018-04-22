#include <stdio.h>
struct a{
	char item;
	char ans;
};
int main()
{
	int N;
	char a;
	scanf("%d",&N);
	struct a test[4];
	for(int j=0;j<N;j++)
	{
		for(int i=0;i<4;i++)
		{
			scanf("%c",&a);
			scanf("%c-%c",&test[i].item,&test[i].ans);
			
		}		
		for(int k=0;k<4;k++)
		{
			if(test[k].ans=='T')
			{
				if(test[k].item=='A')
				{
					printf("1");
				}else if(test[k].item=='B')
				{
					printf("2");
				}else if(test[k].item=='C')
				{
					printf("3");
				}else
				{
					printf("4");
				}
			}
		}
	}

	
}
