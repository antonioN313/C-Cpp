#include <stdio.h>
#include <stdlib.h>



int main()
{
  int X,Y,testes,soad;

  scanf("%d",&testes);

  while(testes--)
  {
	scanf("%d %d",&X,&Y);

	soad = X + Y;

	switch(soad) {

        case 0:
        printf("PROXYCITY\n");
        break;

        case 1:
        printf("P.Y.N.G.\n");
        break;

        case 2:
        printf("DNSUEY!\n");
        break;

        case 3:
        printf("SERVERS\n");
        break;

        case 4:
        printf("HOST!\n");
        break;

        case 5:
        printf("CRIPTONIZE\n");
        break;

        case 6:
        printf("OFFLINE DAY\n");
        break;

        case 7:
        printf("SALT\n");
        break;

        case 8:
        printf("ANSWER!\n");
        break;

        case 9:
        printf("RAR?\n");
        break;

        case 10:
        printf("WIFI ANTENNAS\n");
        break;
    }
  }

  return 0;
}
