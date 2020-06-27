#include<stdio.h>

//Write the recursive power() function that takes base and exponent values as parameters and returns the result. 
//Call it from the main () function according to the sample values. 

int power(int b,int e){
	
	
	if(e<1){
		return 1;
	}
	
	return(b*power(b,e-1));
	
}
 
int main(){
	
	int base,exponent;
	printf("Please enter base and exponenet.\nbase=");
	scanf("%d",&base);
	printf("exponent=");
	scanf("%d",&exponent);
	
	int result=power(base,exponent);
	printf("%d",result);

	return 0;
} 

