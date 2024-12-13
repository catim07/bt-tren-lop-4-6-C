#include<stdio.h>
int main(){
	int a,i;
	printf("moi ban nhap mot so nguyen: ");
	scanf("%d",&a);
	if(a<0){
		printf("moi ban nhap lai so nguyen duong");
		return 0;
	}
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("cac uoc cua so %d la: %d\n",a,i);
		}
	}
	return 0;
}

