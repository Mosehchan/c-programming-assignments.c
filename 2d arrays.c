//arrays in c - 2d arrays
/*
author: moses
reg no:CT101/G/22682/24
date:19/10/2024
*/
#include<stdio.h>
int main(){
    int i,j;
    int heights[2][3] = {{74,58,43}, {66,91,49}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("heights[%d][%d] = %d \n",i,j, heights[i][j]);
        }
    }
    return 0;

	
}