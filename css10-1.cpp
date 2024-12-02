#include<stdio.h>
  int main(){
  	int n=5;
  	int arr[n]={1,2,3,4,5};
  	
  	 printf("Mang hien tai la");
	   for(int i=0;i<n;i++){
	     	printf("%d\t",arr[i]);
   }
     int numbers;
     printf("\nNhap vao phan tu can tim ");
     scanf("%d",&numbers);
     int check=0;
      for(int i=0;i<n;i++){
      	if(arr[i]==numbers){
      		printf("Phan tu co trong mang nam o vi tri thu %d\n",i+1);
      		check=1;
		  }	 
   }
       if(check==0){
       	printf("Mang khong chua phan tu can tim\n");
	   }
   
   return 0;
  }
