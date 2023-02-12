#include<iostream>
#include<cstdio>

int main() {
    system("chcp 1251>nul");
    int pin1,pin2;
    
    printf("Введите логин: ");
    scanf("%i", &pin1);
    
    printf("Введите пароль: ");
    scanf("%i", &pin2);
    
    if ((pin1 == 123 && pin2 == 321) || (pin1 == 456 && pin2 == 654)) {
        printf("Вы прошли в систему, Добро пожаловать!");
    } else {
        printf("Отказано в доступе.");
    }
    
    printf("\n");
    system("pause>nul");
    return 0;
}
