#include <stdio.h>
int main()
{
	int num1, num2, opr, res;
	printf("Enter two numbers:\n");
	scanf("%d %d", &num1, &num2);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter a option\n");
	scanf("%d", &opr);

	switch(opr)
	{
		case 1:
			res = num1 + num2;
			printf("Addition is %d\n", res);
			break;

		case 2:
			res = num1 - num2;
			printf("Subtraction is %d\n", res);
			break;

		case 3:
			res = num1 * num2;
			printf("Multiplication is %d\n", res);
			break;

		case 4:
			if(num2 == 0)
				printf("Error: Anything divided by zero(0) will be Infinite\n");
			else
			{
				res = num1 / num2;
				printf("Division is %d\n", res);
			}
			break;

		default:
			printf("Error: option must be in the range of 1 to 4\n");
	}

	return 0;
}
