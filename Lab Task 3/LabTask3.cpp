#include<stdio.h>
#include<stdlib.h>

//Abubakar JAmil 10662
//OS LAb Task 3
//Question 4

main(){
	
	printf("Abubakar Jamil 10662\nOS Lab Task 3\nQuestion 4\n");
	int *ptr, i, sum=0;
	ptr = (int*)malloc(10*sizeof(int));
	
	for(i=0;i<10;i++){
		ptr+i;
	}
	printf("First Allocation\n\n");
	for(i=0;i<10;i++){
		printf("%d\n",*(ptr+i));
	}
	for(i=0;i<10;i++){
		sum += *(ptr+i);
	}
	printf("Sum of array elements is: %d\n",sum);
	
	ptr = (int*)realloc(ptr, 10*sizeof(int));
	printf("Reallocation\n\n");
	for(i=0;i<10;i++){
		printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
}



//Question 1
//void fun(int x){
//	x=30;
//}
//
//main(){
//	int y  =20;
//	fun(y);
//	printf("%d", y);
//}

//Question 2
//void fun(int *ptr){
//	*ptr=30;
//}
//
//main(){
//	int y  =20;
//	fun(&y);
//	printf("%d", y);
//}

//Question 3
//main(){
//	int *ptr;
//	int x;
//	
//	ptr = &x;
//	*ptr =0;
//	
//	printf("x = %d\n",x);
//	printf("*ptr = %d\n",*ptr);
//	
//	*ptr += 5;
//	printf("x = %d\n",x);
//	printf("*ptr = %d\n",*ptr);
//	
//	(*ptr)++;
//	printf("x = %d\n",x);
//	printf("*ptr = %d\n",*ptr);
//	
//}


