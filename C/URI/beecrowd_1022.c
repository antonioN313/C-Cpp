#include <stdio.h>

typedef struct {int num,den;} Rac;

Rac SomaRac(Rac, Rac);
Rac SubtraiRac(Rac, Rac);
Rac MulRac(Rac, Rac);
Rac DivRac(Rac, Rac);
Rac SimplRac(Rac);
int mdc(int, int);

int main(void){
    
    Rac x, y, res;
    int casoTeste;
    char operacao;

    scanf("%d",&casoTeste);

    while(casoTeste--){
	
	scanf("\n%d %*c %d %c %d %*c %d",&x.num,&x.den,&operacao,&y.num,&y.den);

	if(operacao == '+')
   			res = SomaRac(x, y);
   		else if(operacao == '-')
   			res =  SubtraiRac(x, y);
   		else if(operacao == '*')
   			res = MulRac(x, y);
   		else 
   			res =  DivRac(x, y);

   		printf("%d/%d = ", res.num, res.den);

   		res =  SimplRac(res);
		printf("%d/%d\n", res.num, res.den);

    }

    return 0;
}

Rac SomaRac(Rac n1, Rac n2)
{	Rac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

Rac SubtraiRac(Rac n1, Rac n2)
{	Rac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

Rac MulRac(Rac n1, Rac n2)
{	Rac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

Rac DivRac(Rac n1, Rac n2)
{	Rac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

Rac SimplRac(Rac n1)
{	Rac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

