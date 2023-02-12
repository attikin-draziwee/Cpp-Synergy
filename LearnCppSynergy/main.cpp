#include<iostream>
#include<cstdio>

int main() {
    int login1 = 626,
        password1 = 344;
    long login2 = 2147483641,
        password2 = 21474836;
    long login3 = 3232;
    int password3 = -3392;
    long user_login, user_password;
    
    printf("Введите логин: ");
    scanf("%ld", &user_login); // для ввода long используется спец. символ %ld
   
    printf("Введите пароль: ");
    scanf("%ld", &user_password); // для ввода long используется спец. символ %ld
    
    if (user_login == (int) login1 && user_password == (int) password1) {
        printf("Вы вошли в систему! Добро пожаловать, Анна.\n");
    } else if (user_login == login2 && user_password == password2){
        printf("Вы вошли в систему! Добро пожаловать, Георгий.\n");
    } else if (user_login == login3 && user_password == (int) password3){
        printf("Вы вошли в систему! Добро пожаловать, Алексей.\n");
    } else {
        printf("Отказано в доступе.\n");
    }
    
    return 0;
}
