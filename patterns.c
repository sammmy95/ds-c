#include <stdio.h>

void print1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void print2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void print3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1 ; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
void print4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1 ; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}
void print5(int n) {
    for (int i = 5; i>=1; i--) {
        for (int j = 1 ; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void print6(int n) {
    for (int i = 5; i>=1; i--) {
        for (int j = 1 ; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
void print7(int n) {
    for (int i = 1; i<n; i++) {
        for (int j = 1 ; j <= n-i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        for (int j = 1 ; j <= n-i; j++) {
            printf(" ");
        }

        printf("\n");
    }
}
void print8(int n) {
    for (int i = 0; i< n; i++) {
        for (int j = 0 ; j <i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*n-(2*i+1); k++) {
            printf("*");
        }
        for (int j = 0 ; j <i; j++) {
            printf(" ");
        }
        printf("\n");
    }
        
    }
void print10(int n) {
    for (int i = 1; i<=2*n-1; i++) {
        int stars=i;
        if (i>n) {
            stars=2*n-i;
        }
        for (int j = 1 ; j <= stars; j++) {
            printf( "*");
        }
        printf("\n");

    }
        
    }
void print11(int n) {
    for (int i = 0; i<=n; i++) {
        for (int j = 0 ; j <= i; j++) {

            if (i%2==0){
                if (j%2==0) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            else {
                if (j%2==0) {
                    printf("0");
                } else {
                    printf("1");
                }
             
        }

    }
        printf("\n");
    }   
} 
void print12(int n) {
    int space=2*(n-1);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
        space-=2;
    }
        
    }
void print13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
} 
void print14(int n)
{
    for (int i = 65; i < 65 + n; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    print14(n);

    return 0;
}