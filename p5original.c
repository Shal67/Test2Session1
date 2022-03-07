#include<stdio.h>
 int input_n()
{
  int n;
	printf("Enter n value: ");
	scanf("%d", &n);
  return n;
}

void input(int n,int prime[n + 1])
{

	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
}

void ero(int n,int prime[n+1])
{
  	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
}

void output(int n,int prime[n+1])
{
  printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);
		}
	}
}
  
int main()
{
  int n;
  n=input_n();
  int prime[n+1];
  input(n,prime);
  ero(n,prime);
  output(n,prime);
  return 0;
}
