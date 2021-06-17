#include <stdio.h>
#include <conio.h>

int main()
{
	int Maths,Science,English,SocialStudies,Hindi,total;
	char Name[50];
	float result;
	
	printf("\n Enter your name: ");
	scanf("%s",&Name);
	
	printf("\n\n Please enter all marks out of 100.");
	
	printf("\n\n Enter your Math marks: ");
	scanf("%d",&Maths);
	printf("\n Enter your Science marks: ");
	scanf("%d",&Science);
	printf("\n Enter your Social Studies marks: ");
	scanf("%d",&SocialStudies);
	printf("\n Enter your Hindi marks: ");
	scanf("%d",&Hindi);
	printf("\n Enter your English marks: ");
	scanf("%d",&English);
	
	total=Maths+Science+SocialStudies+Hindi+English;
	result=total/(float)5;
	
	printf("\n\n %s your total marks are %d out of 500",Name,total);
	printf("\n\n and your result is %.2f percent.",result);
	
	getch();
	return 0;
}
