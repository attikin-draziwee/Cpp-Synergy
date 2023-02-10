#include<iostream>

int main() {
    system("chcp 1251>nul");
    
    int a,b;
    printf("Введите первое число: ");
    scanf("%i", &a);
    
    printf("Введите второе число: ");
    scanf("%i", &b);
    
    if (a > b) {
        printf("Больше\n");
    } else if (a < b) {
        printf("Меньше\n");
    } else {
        printf("Равны\n");
    }
    
    system("pause>nul");
    return 0;
}
