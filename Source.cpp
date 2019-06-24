#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>
#define deg 1000
int main (void){
	int arr[deg];
	srand(time(NULL));
	int r, b = 0, c, d,val;
	printf("filling of the array will be from 0 to :");
	scanf_s("%d", &val);
	if (val <= 0) return 0;
	for (int i = 0; i < deg; i++)
	{
		r = rand() % (val+1);
		arr[i] = r;
	}
	for (int i = 0; i < deg; i++) 
	{
		printf("%d ", arr[i]);
	}
	int Smax = 0;
	int s;
	for (int i = 0; i < deg; i = i + s + 1)
	{
		s = 0;
		while (0 == arr[s + i] && s + i < deg) s++;
		if (s > Smax) Smax = s;
	}
	printf("\n %d", Smax);

}