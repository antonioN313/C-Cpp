#include <stdio.h>

int main()
{
    double dinheiro;

    int n_100 = 0,n_50 = 0,n_20 = 0,n_10 = 0,n_5 = 0,n_2 = 0;
    int m_1 = 0,m_05 = 0,m_025 = 0,m_010 = 0,m_005 = 0,m_001 = 0;

    scanf("%lf", &dinheiro);

    while(dinheiro >= 100)
    {
        dinheiro -= 100;
        n_100++;

    }
    while(dinheiro >= 50)
    {
        dinheiro -= 50;
        n_50++;

    }
    while(dinheiro >= 20)
    {
        dinheiro -= 20;
        n_20++;

    }

    while(dinheiro >= 10)
    {
        dinheiro -= 10;
        n_10++;

    }
    while(dinheiro >= 5)
    {
        dinheiro -= 5;
        n_5++;

    }
    while(dinheiro >= 2)
    {
        dinheiro -= 2;
        n_2++;

    }
    while(dinheiro>=1)
    {
	dinheiro -= 1;
	m_1++;
    }
    while(dinheiro>=0.50)
    {
	dinheiro -= 0.50;
        m_05++;
    }
    while(dinheiro>=0.25)
    {
	dinheiro -= 0.25;
	m_025++;
    }
    while(dinheiro>=0.10)
    {
	dinheiro -= 0.10;
        m_010++;
    }
    while(dinheiro>=0.05)
    {
	dinheiro -= 0.05;
	m_005++;
    }
    while(dinheiro >= 0.01)
    {
	dinheiro -= 0.01;
        m_001++;
    }


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n_100);
    printf("%d nota(s) de R$ 50.00\n",n_50);
    printf("%d nota(s) de R$ 20.00\n",n_20);
    printf("%d nota(s) de R$ 10.00\n",n_10);
    printf("%d nota(s) de R$ 5.00\n",n_5);
    printf("%d nota(s) de R$ 2.00\n",n_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m_1);
    printf("%d moeda(s) de R$ 0.50\n",m_05);
    printf("%d moeda(s) de R$ 0.25\n",m_025);
    printf("%d moeda(s) de R$ 0.10\n",m_010);
    printf("%d moeda(s) de R$ 0.05\n",m_005);
    printf("%d moeda(s) de R$ 0.01\n",m_001);


    return 0;
}
