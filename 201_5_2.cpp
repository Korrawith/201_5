#include<stdio.h>

int main(){
	
    int a,i,j;

    scanf ("%d",&a);
    char  z[a][((a-1)/2)*2+1];
        for ( i = 0; i < a; i++){
            for ( j = 0; j < ((a-1)/2)*2+1 ; j++){
        
		        z[i][j]='_';
            }
        }
    for ( i = 0; i < (a+1)/2; i++){
    	
        z[i][(a-1)/2+i]='*';
        z[i][(a-1)/2-i]='*';
        z[a-1-i][(a-1)/2+i]='*';
        z[a-1-i][(a-1)/2-i]='*';
    }

    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < ((a-1)/2)*2+1 ; j++)
        {
            printf("%c",z[i][j]);
        }
            printf("\n");
        }

}
