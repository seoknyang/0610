#include<stdio.h>
int fact(int a)
{
	if(a == 1)
		return 1;
	else
		return a * fact(a - 1);
	printf("%d\n", a);
}
int main()
{
	int a, n;
	printf("���� �Է�: ");
	scanf("%d", &n);
	a = fact(n);
	
	printf("%d! = %d\n", n, a);
	
	return 0;
}
