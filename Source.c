#include <stdio.h>
#include <math.h>
#include <locale.h>
#define	_USE_MATH_DEFINES
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int h, b, c, c1f;
	char a;
	puts("Введите c, b, h и символ: ");
	scanf("%i %i %i %c", &c, &b, &h, &a);
	system("pause");
	float tg = h / ((c - b) / 2);
	for (int space = 1; space <= (c - b) / 2; ++space) putchar(' ');
	for (int count1 = 1; count1 <= b; ++count1)
	{
		putchar(a); if (count1 == b) putchar('\n');
	};
	for (int counth = 1; counth <= h; ++counth)
	{
		float c1 = (float)counth / tg;
		int c1i = (int)c1;
		if (c1 - (float)c1i < 0.5)
			c1f = (c - b) / 2 - c1i;
		else
			c1f = (c - b) / 2 - (c1i + 1);
		for (int countc = (int)c1f - 1; countc >= 0; --countc)
		{
			putchar(' ');
			if (countc == 0)
			{
				putchar(a);
				for (int counts = c - 2 * c1f - 3; counts >= 0; --counts)
				{
					putchar(' ');
					if (counts == 0)
						putchar(a);
				};
				putchar('\n');
			};
		};
	};
	for (int count2 = 1; count2 <= c; ++count2)
	{
		putchar(a);
	};
	return 777;
}