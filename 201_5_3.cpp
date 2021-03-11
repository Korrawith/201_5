#include <stdio.h>

int main (){

    int i,a,b[1000],c=4;

    scanf("%d",&a);

    b[0]=1;
    b[1]=2;
    b[2]=3;
    for ( i = 3;i<1000 ;c++){
    	
        if (c/10==0){
        	
            if (c%2==0){
            	
                b[i]=c;
                i++; 
            }
            else if (c%3==0){
            	
                b[i]=c;
                i++;
            }
            else if (c%5==0){
            	
                b[i]=c;
                i++;
            }
        }
        else{
        	
            if (c%2==0&&c%3==0){
            	
                b[i]=c;
                i++;
            }
            else if (c%2==0&&c%5==0){
            	
                b[i]=c;
                i++;
            }
            else if (c%3==0&&c%5==0){
            	
                b[i]=c;
                i++;
            }
            else if (c%3==0&&c%5==0&&c%2==0){
            	
                b[i]=c;
                i++;
            }

        }
    }
    for ( i = 0; i < 1000; i++){
    	
        if (a==i+1){
        	
            printf("%d",b[i]);
        }
    }
}
