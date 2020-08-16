#include<stdio.h>
float allweight();
float numP[6];
float sum;
int i = 0;
int main() {
	allweight();
	printf("allweigth : ");
	printf("%f", sum);
	return 0;
	
	}
float allweight() {
	
	for (i = 0; i < 6; i++)
	{
		printf("weight #");
		printf("%d ", i + 1);
		scanf("%f", &numP[i]);
		printf("\n");
		sum += numP[i];
		if (sum > 450) {
			printf("O V E R W E I G H T\n");
			sum = sum - numP[i];
			i = i - 1;
		}
		
	}
	return sum;

}
