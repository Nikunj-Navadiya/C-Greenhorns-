#include<stdio.h>
// Write C program to convert temperature from degree Celsius to Fahrenheit. (C × 9/5) + 32 = 32°F)

void main(){
	float celsius, Ans;
	printf("Enter Value :- ");
	scanf("%f",&celsius);
	
	Ans = celsius*9/5+32;
	
	printf("convert Celsius to Fahrenheit :- %f",Ans);
}
