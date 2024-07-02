#include <stdio.h>


int main(){
    int notes;

    printf("input the amount: ");
    scanf("%d", &notes);

    printf("%d note(s) of 100.00\n", notes / 100);
    notes = notes % 100;
    printf("%d note(s) of 50.00\n", notes / 50);
    notes = notes % 50;
    printf("%d note(s) of 20.00\n", notes / 20);
    notes = notes % 20;
    printf("%d note(s) of 10.00\n", notes / 10);
    notes = notes % 10;
    printf("%d note(s) of 5.00\n", notes / 5);
    notes = notes % 5;
    printf("%d note(s) of 2.00\n", notes / 2);
    notes = notes % 2;
    printf("%d note(s) of 1.00\n", notes / 1);
    notes = notes % 1;

    return 0;

}
