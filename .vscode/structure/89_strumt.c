#include<stdio.h>
#include<string.h>

int main(){
    int a[3][3], b[3][3], c[3][3], i, j, k, n=3;

    printf("enter %d numbers for matrix A : \n",n*n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter %d numbers for matrix  B: \n",n*n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j] += a[i][k] * b[k][j];
        
        printf("\n");
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}