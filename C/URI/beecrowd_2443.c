#include <stdio.h>
#include <stdlib.h>

typedef struct {int num, den;} Frac;


Frac SomaRac(Frac, Frac);
Frac SimplRac(Frac);
int mdc(int, int);

int main(void)
{	Frac X, Y, R, b;

	scanf("%d %d %d %d", &X.num, &X.den,&Y.num, &Y.den);
	
	R = SomaRac(X, Y);		
	b = R;
	R = SimplRac(b);
	printf("%d %d\n",R.num, R.den);
								
	return 0;
}

Frac SomaRac(Frac n1, Frac n2)
{	Frac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

Frac SubtraiRac(Frac n1, Frac n2)
{	Frac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

Frac MulFrac(Frac n1, Frac n2)
{	Frac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

Frac DivRac(Frac n1, Frac n2)
{	Frac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

Frac SimplRac(Frac n1)
{	Frac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0){
	m = -m;
	}
	
	if (n < 0){
	n = -n;
	}

	if (m % n == 0){
		return n;
	}
	else{
		return mdc(n, m % n);
	}
}