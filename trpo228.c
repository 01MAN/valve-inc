#include <stdio.h>
int vklad(int q, int w){
    int e;
    if (q < 1000000){
        if (w < 31){
            e = q - q * 0.1;
        };
        if ((w > 30) && (w < 121)){
            e = q + q * 0.02;
        };
        if ((w > 120) && (w < 241)){
            e = q + q * 0.06;
        };
        if ((w > 240) && (w < 366)){
            e= q + q * 0.12;
        };
    } 
    else{
        if (w < 31){
            e = q - q * 0.1;
        };
        if ((w > 30) && (w < 121)){
            e = q + q * 0.03;
        };
        if ((w > 120) && (w < 241)){
            e = q + q * 0.08;
        };
        if ((w > 240) && (w < 366)){
            e= q + q * 0.15;
        };
    };
    return e;
};        
int main(){
    int sum, data, vihod;
    printf("Sum vklada: ");
    scanf("%d", &sum);
    printf("Srok vklada: ");
    scanf("%d", &data);
    if ((sum > 9999) && (data < 366) && (data >= 0)){
        vihod = vklad(sum, data);
        printf("Your money: %d", vihod);
    } else{
        printf("Error");
    };
    return 0;
};