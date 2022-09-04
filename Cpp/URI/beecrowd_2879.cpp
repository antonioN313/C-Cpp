#include <stdio.h>
 
int main() {
 
    int n, portaPremiada, qtdVitorias = 0;
    scanf("%i", &n);
    
    while (n--) {
        scanf("%i", &portaPremiada);
        if (portaPremiada != 1)
            qtdVitorias++;
    }
    
    printf("%i\n", qtdVitorias);
 
    return 0;
}
