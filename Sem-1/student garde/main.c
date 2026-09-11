#include <stdio.h>

int  main(){
    float sub1,sub2,sub3;

    printf("add numbers for subject A : ");
    scanf("%f",&sub1);

    printf("add numbers for subject B : ");
    scanf("%f",&sub2);

    printf("add numbers for subject C : ");
    scanf("%f",&sub3);

    int avg = (sub1+sub2+sub3)/3;

    if(sub1 >= 40 && sub2>= 40 && sub3>= 40){
        printf("pass");


        if(avg >= 75){
            printf(" with distinction");
        }
        else if(avg >= 60){
            printf(" with first division");
        }
        else if(avg >= 50){
            printf(" with second division");
        }
}
else{
        printf("fail");
    }

    return 0;
}