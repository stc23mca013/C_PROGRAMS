#include<stdio.h>
int main() {
	int sum = 0,i=0,sum1 = 0,size = 12;
	int arr[] = {1,2,3,4,5,6,8,9,10,11,12};
	while(i<11) {
		sum = sum + arr[i];
		i++;
	}
	printf("%d\n", sum);

	int ori = size * ( size +  1);
	int ori_ = ori / 2;
	printf("%d\n", ori_);

	int result = ori_ - sum;
	printf("The missing element is:%d", result);



	return 0;
}

