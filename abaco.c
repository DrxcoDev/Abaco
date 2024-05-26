#include <stdio.h>
#include <string.h>

int leer_abaco(const char *abaco[7]) {
    int resultado = 0;
    for (int i = 0; i < 7; i++) {
        const char *alambre = strstr(abaco[i], "---");
        int cuentas_izquierda = alambre - abaco[i];
        resultado = resultado * 10 + cuentas_izquierda;
    }
    return resultado;
}

int main() {
    const char *abaco[7] = {
        "O---OOOOOOOO",
        "OOO---OOOOOO",
        "---OOOOOOOOO",
        "OO---OOOOOOO",
        "OOOOOOO---OO",
        "OOOOOOOOO---",
        "---OOOOOOOOO"
    };
    
    int resultado = leer_abaco(abaco);
    printf("Resultado: %d\n", resultado);
    
    int a = 0;
    while (a = 0)
    {
        /* code */
    }
    

}