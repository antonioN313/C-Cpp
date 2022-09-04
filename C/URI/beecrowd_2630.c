#include <stdio.h>
#include <string.h>

int min(int, int, int);
int max(int, int, int);
int mean(int, int, int);
int eye(int, int, int);

int main(){
    
   int T,P,R,G,B;
   char processo[5];

   scanf("%d",&T);

   for(int i=0; i < T; i++){
    
    scanf("%s",processo);
    scanf("%d %d %d",&R,&G,&B);

    if(!strcmp(processo, "eye")){
 
 	   P=eye(R,G,B);   
    
    }else if(!strcmp(processo, "mean")){

        P=mean(R,G,B);

     }else if(!strcmp(processo,"min")){

        P=min(R,G,B);

      }else if(!strcmp(processo, "max")){
 
        P=max(R,G,B);       
      }

    printf("Caso #%d: %d\n",i+1,P);   
   
   }

   return 0;
}

int min(int x, int y, int z){

   int red,green,blue;

   if((x < y) && (x < z)){
      red=x;
      return red;
   }
   
   else if((y < x) && (y < z)){
      green=y;
      return green;
   }
   
   else{
      blue=z;
      return blue;
   }
}
int max(int x, int y, int z){

   int red,green,blue;

   if((x > y) && (x > z)){
      red=x;
      return red;
   }
   else if((y > x) && (y > z)){
      green=y;
      return green;
   }
   else{
      blue=z;
      return blue;
   }
}
int mean(int x, int y, int z){

   int media;

   media = (int)(x + y + z)/3;

   return media;
}

int eye(int x, int y, int z){

   int olho;

   olho = 0.30*x + 0.59*y + 0.11*z;

   return olho;
}