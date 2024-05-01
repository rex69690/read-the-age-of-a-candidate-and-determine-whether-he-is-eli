#include <stdio.h>

int main(void) {
 int age;
  printf("Enter the age of candidate: ");
  
        scanf("%d",&age);
  
  
  if (age>=18)
  
  {
  
     printf("Candidate is eligible to vote");
  
  }
  
  else if(age<18)
  
  {
  
    printf("Candidate is not eligible");
  
  }
  
  else
  
  {
    
    printf("Invalid input");
  
  }
}