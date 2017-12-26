#include <cstdio>

int main()
{
	int a;
	int b;
	int c;
	int tmp;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	tmp = a;
	if(a < b || a < c){
		if(b < c){
			tmp = c;
		}else{
			tmp = b;
		}
	}

	printf("%d eh o maior\n", tmp);

	return 0;
}
