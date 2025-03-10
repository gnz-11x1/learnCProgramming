# include <stdio.h>
# include <stdbool.h>

int main() {

    // varialble = A  reusable container for a value.
    //              Behave as if it were the value it contains

    // int data type = whole numbers (4 bytes in modern systems)

    int age = 25;
    int year = 2025;
    int quantity = 2;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    // float data type = single-precision decimal number (4 bytes)

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%f\n", price);
    printf("The temperature is %f°F\n", temperature);

    // double data type = double-precision decimal number (8 bytes)

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    // char data type = single character (1 byte)

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    // In C we don't have "string" data type, but we can add multiple data type using char[] = array of characters (size varies)

    char name[] = "Sayak Majumder";
    char food[] = "Motton Kosha";
    char email[] = "fake123@email.com";
    
    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    // bool data type (to work with boolean we have to add '#include <stdbool.h>' at the top) = true of false (1 byte)

    bool isOnline = true;

    printf("%d", isOnline);




    return 0;
}