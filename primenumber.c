#include<stdio.h>
int main(){
          int n ,fact;
          printf(" \n enter the numbber you want the factor of =");
          scanf("%d",&n);
          for(int i=1;i<=n;i++){
                   if(n%i==0){
                      fact++;
                      }
                      }
                      if(fact==2){
                      printf("prime number");
                      }
                      else{
                      printf("not a prime number");
                      }
                }
                      
                          
