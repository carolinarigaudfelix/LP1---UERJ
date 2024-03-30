#include<stdio.h>

int main(){
    int mat[10][10], count;
    
    for(int i = 0; i<10; i++){
        for(int j =0; j < 10; j++){
            mat[i][j]=30;
            count++;
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}