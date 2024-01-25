
#include <stdio.h>

void main() {
    char g;
    int age;
    float m;
    
    printf("Enter gender\n");
    scanf("%c",&g);
    printf("\nmoney of travel:\n");
    scanf("%f",&m);
    printf("\n age:\n");
    scanf("%d",&age);
    
    switch(g)
    {
        case 'f':
        case 'F': if(age>=58)
                  {
                      printf("After discount for female seat as age being %d is :%f",age,0.9*m);
                  }
                  else
                  printf("discount cannot be given if age less than 58 Money be :%f",m);
                  break;
                  
                  case 'M': 
                  case 'm':
                  if(age>=58)
                  {
                      printf("After discount for male seat as age being %d is :%f",age,0.9*m);
                  }
                  else
    printf("discount cannot be given if age less than 58 money be:%f",m);
                  break;
                   
                   case 't':
                   case 'T': if(age>=58)
                  {
                      printf("After discount for transgender seat as age being %d is :%f",age,0.9*m);
                  }
                  else
                  printf("discount cannot be given if age less than 58 money be :%f",m);
                  
                  break;
                  
                  default:printf("invalid character of gender scanned");
                  
                  
    }
    
    

    
}