#include <stdio.h>
#include <conio.h>

int main()
{
	int mark1,mark2,mark3,mark4,mark5,total;
	char Name[50];
	float result;
	
	printf("\n Enter your first name: ");
	scanf("%s",&Name);
	
	printf("\n\n Please enter all marks out of 100.");
	
	printf("\n\n\n  Your marks in subject 1: ");
	scanf("%d",&mark1);

	printf("\n  Your marks in subject 2: ");
	scanf("%d",&mark2);

	printf("\n  Your marks in subject 3: ");
	scanf("%d",&mark3);

	printf("\n  Your marks in subject 4: ");
	scanf("%d",&mark4);
	
	printf("\n  Your marks in subject 5: ");
	scanf("%d",&mark5);
	
	total=mark1+mark2+mark3+mark4+mark5;
	result=total/(float)5;
	
	printf("\n\n  >> %s your total marks are %d out of 500",Name,total);
	printf("\n\n  >> Your result is %.2f percent.",result);


	getch();
	return 0;
}