#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enlista tres numeros de forma decendente\n");
    printf("Ingrese el primer valor\n");
    scanf("%d",&a);
    printf("Ingrese el segundo valor\n");  
    scanf("%d",&b);
    printf("Ingrese el tercer valor\n");
    scanf("%d",&c);
    
    if(a>b){
            if(b>c)
                    printf("%d,%d,%d",a,b,c);
                    
               else{
                    if(a>c)
                            printf("%d,%d,%d",a,c,b);
                            
                       else
                            printf("%d,%d,%d",c,a,b);
                            
                    }
            }
    else{
         if(b>c){
                 if(c>a)
                         printf("%d,%d,%d",b,c,a);
                         
                    else
                         printf("%d,%d,%d",b,a,c);
                         
                 }
            else
                 printf("%d,%d,%d",c,b,a);
                 
         }
return 0;
}
