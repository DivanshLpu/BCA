#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    int a = 5;
    float b = 578.58;
    double c = 3.145987138557157;

    char d = 'D';
    char e[] = "helo divansh gaba this is me 1234@";
    bool f = true;
    bool g = false;

    printf("The value of f is: %d\nand g is: %d\n", f,g);

    printf("HEY %c and -- %s\n", d,e);
    printf("The value of a is: %d\nand float val is %.2f \nand also the long float value is %.15lf\n", a,b,c);

    // =====================================
    char name[50] = "\0";
    printf("ENTER YOUR NAME : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; 
    printf("Hello, %s", name);

}
