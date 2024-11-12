//arrays in c - 3d arrays
/*
author:moses
reg no CT101/G/22682/24
date:19/10/2024
*/
#include<stdio.h>
int main(){
    int i,j,k;
    int students[2][2][3] = { {{65,43,67}, {78,45,74}}, {{91,57,37},{23,65,74}} };
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                printf("students[%d][%d][%d] = %d \n",i,j,k, students[i][j][k]);
            }
        }
    }
    return 0;
}