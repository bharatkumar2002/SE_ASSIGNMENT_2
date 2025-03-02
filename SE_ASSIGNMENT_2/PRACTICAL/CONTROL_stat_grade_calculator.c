#include<stdio.h>
void main()
{
	int id, m1, m2, m3, m4, m5 ,total ;
	float per ;
	char str[30];
	printf("\n\n\t enter your Id :");
	scanf("%d" ,& id);
	printf("\n\n\t enter your Name :");
	scanf("%s" , & str);
	printf("\n\n\t enter marks of English :");
	scanf("%d" , & m1);
	printf("\n\n\t enter marks of Maths :");
	scanf("%d", &m2);
	printf("\n\n\t enter marks of Science :");
	scanf("%d", &m3);
	printf("\n\n\t enter marks of History :");
	scanf("%d", &m4);
	printf("\n\n\t enter marks of Hindi :");
	scanf("%d", &m5);

	total = m1 + m2 + m3 + m4 + m5;
	per = total / 5;
	printf("\n\n\t ------------------------------");
	printf("\n\n\t ---------MARKS SHEET----------");
	printf("\n\n\t ------------------------------");
	printf("\n\n\t your Id             :%d", id);
	printf("\n\n\t your Name           :%s", str);
	printf("\n\n\t ------------------------------");
	printf("\n\n\t Marks in English    :%d", m1);
	printf("\n\n\t Marks in Maths      :%d", m2);
	printf("\n\n\t Marks in Science    :%d", m3);
	printf("\n\n\t Marks in History    :%d", m4);
	printf("\n\n\t Marks in Hindi      :%d", m5);
	printf("\n\n\t ------------------------------");
	printf("\n\n\t Total Marks         :%d", total);
	printf("\n\n\t Percentage          :%.2f", per);
	
	if (per >= 70)
		printf("\n\n\t your grade is A+");
	else if (per >= 60)
		printf("\n\n\t your grade is A");
	else if (per >= 50)
		printf("\n\n\t your grade is B");
	else if (per >= 40)
		printf("\n\n\t your grade is C");
	else
		printf("\n\n\t fail");
	printf("\n\n\t ------------------------------");
}

