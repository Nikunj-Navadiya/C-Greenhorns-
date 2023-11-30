#include<stdio.h>
//Write C Program to find gross salary.
//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.Ans = 123 RS

void main(){
	float total, basic , hra , da , ta;
	printf("Enter Basic Salary :-  ");
	scanf("%f", &basic);
	
	hra = basic * 10 / 100;
	da = basic * 5 / 100;
	ta = basic * 8 / 100;
	
	total = basic + hra + da + ta;
	printf("Gross salary :- %.2f",total);
}
