#include <stdio.h>

#include <math.h>

int main() {

    int data[10];

    int data_at_reciever[10];

    int c,c1,c2,c3,i;


    printf("Enter 4 bits of data one by one\n");

    scanf("%d", &data[0]);

    scanf("%d", &data[1]);

    scanf("%d", &data[2]);

    scanf("%d", &data[4]);

    data[6] = data[0] ^ data[2] ^ data[4];

    data[5] = data[0] ^ data[1] ^ data[4];

    data[3] = data[0] ^ data[1] ^ data[2];

    printf("\nEncoded data is\n");

    for (i = 0; i < 7; i++) {

        printf("%d ",data[i]);

    }

    return 0;

}