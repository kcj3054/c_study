//#include <stdio.h>
//#include <stdbool.h>
//#include <ctype.h> //islower()
//#include <iso646.h> // and, or, not 사용가능
//
//#define PERIOD '.'
//
//int main()
//{
//	/*
//	Logical operators
//
//	&& : and
//	|| : or
//	! : not
//	*/
///*
//	bool test1 = 3 > 2 || 5 > 6; // true
//	bool test2 = 3 > 2 && 5 > 6; // flase
//	bool test3 = !(5 > 6); // true -> 5 <= 6
//
//	printf("%d d %d\n", test1, test2, test3);
//*/
//
//	/*Character counting example*/
//	/*char ch;
//	int count = 0;
//	while ((ch = getchar() != PERIOD)) 
//	{
//		if(ch != '\n' && ch != ' ')
//			count++;
//	}
//	printf("%d \n", count);
//
//
//
//	/*
//		short - circuit Evaluation
//
//		-Logical expressions are evaluated from left to right
//		-&& and || are sequence points
//
//		sequence points를 만나면 이전의 값이 계산이 되버린다 
//	*/
//
//	/*
//	int temp = (1 + 2) * (3 + 4);
//	printf("Before : %d\n", temp);
//
//	if (temp == 0 && (++temp == 1024))//-Logical expressions are evaluated from left to right
//	{
//		//do nothing
//	};
//
//	printf("After : %d\n", temp);*/
//
//	//int x = 1, y = 2;
//	//if (x++ > 0 && x + y == 4) //sequence points
//	//	printf("%d %d\n", x, y);
//
//	/*소문자만 출력*/
//	//for (char c = -128; c < 127; ++c)
//	//	if (c >= 'a' && c <= 'z')
//	//		printf("%c ", c);
//	//
//	//printf("\n");
//
//	for (char c = 0; c < 127; ++c)
//		if (islower(c))
//			printf("%c ", c);
//
//	return 0;
//
//
//}