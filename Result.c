#include<stdio.h>
int main(){
    int mark;
    printf("Enter a Number :");
    scanf("%d", &mark);
    
    if(mark >= 80 && mark <=100){
        printf("Result is : A+");
    }
    
       else if(mark >= 70 && mark <80){
        printf("Result is : A");  
    }
     else if(mark >= 60 && mark <70){
        printf("Result is : A-");
        }
   else if(mark >= 50 && mark <60){
        printf("Result is : B");
        }
    
    else if(mark >= 40 && mark <50){
        printf("Result is : D");
        }
    
     else if(mark >= 33 && mark <40){
        printf("Result is : D");
        }
    
   else{
        printf("Result is : Fail");
    } 
    
  return 0;  
}