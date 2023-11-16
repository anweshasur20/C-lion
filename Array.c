//
// Created by Anwesha Sur on 12-11-2023.
//
#include<stdio.h>
#include<conio.h>
int main() {
    int arr[5];
     printf("enter 5 integers");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Displaying Integers:");
    for (int j = 0; j < 5; j++) {
        printf("%d\n", arr[j]);
    }
}