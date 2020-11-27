//greater of three no using nested if-else

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("enter three numbers;");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b){
        if(a>c){
            printf("a");
            
        }
            else
            printf("c");
        }
        else if(b>c){
            printf("b");
            
        }
            else
            printf("c");
        
}
