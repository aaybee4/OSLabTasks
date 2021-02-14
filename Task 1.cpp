#include <stdio.h>


//ABubakar Jamil 10662
int main(){
//	
//	float a;
//	float b;
//	
//	printf("Enter number 1\n");
//   	scanf("%f", &a);
//	
//	printf("Enter number 2\n");
//	scanf("%f", &b);
//	
//	float div = a/b;
//	float mul = a*b;
//	
//	printf("Division: %f\n",div);
//	printf("Multiplication: %f",mul);
//	
//	
//	printf("\nABubakar Jamil 10662");

//Abubakar Jamil 10662
//int i,j,k;
//for(i=0;i<10;i++) {
//	for(j=10;j>i;j--){
//		printf(" ");
//	}
//	for(k=0;k<i;k++){
//		printf("*");
//	}
//	printf("\n");
//}
//printf("\nABubakar Jamil 10662");



//Abubakar Jamil 10662
int a[2][2]={{155,2},{6,755}};
int b[2][2]={{26,272},{315,322}};
int result[0][0];

for(int i=0; i< 2; i++){
	for(int j=0; j< 2; j++){
		result[i][j] = a[i][j] * b[i][j];
	}
}
for(int i=0; i< 2; i++){
	for(int j=0; j< 2; j++){
		printf("%d ",result[i][j]);
		if(j==2){
			printf("\n");
		}
	}
}
printf("\nABubakar Jamil 10662");

	getchar();
return 0;





}
