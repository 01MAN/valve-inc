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