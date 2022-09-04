#include <stdio.h>

int main(){

    int cha,pessoas[5],p,acertoscha=0;

    scanf("%d\n",&cha);

    for(p=0;p<5;p++){

        scanf("%d",&pessoas[p]);
        if(pessoas[p]==cha){
            acertoscha += 1;
        }
    }
    printf("%d\n",acertoscha);
    return 0;
}
