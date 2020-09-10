// Author: Ji Woong Park jjp6315@psu.edu
// Collaborator: Mary Meier mrm6632@psu.edu
// Collaborator: Greg Dorazio gmd5474@psu.edu
// Collaborator: Alex Podlucky app5775@psu.edu
// Section: 005R (Sec 01-12)
// Breakout: 9
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * gradestr = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(gradestr);
  
  if (grade >= 93.0)
    printf("Your letter grade for CMPSC 131 is A+.\n");
  else if (grade >= 90.0)
    printf("Your letter grade for CMPSC 131 is A.\n");
  else if (grade >= 87.0)
    printf("Your letter grade for CMPSC 131 is B+.\n");
  else if (grade >= 83.0)
    printf("Your letter grade for CMPSC 131 is B.\n");
  else if (grade >= 80.0)
    printf("Your letter grade for CMPSC 131 is B-.\n");
  else if (grade >= 77.0)
    printf("Your letter grade for CMPSC 131 is C+.\n");
  else if (grade >= 70.0)
    printf("Your letter grade for CMPSC 131 is C.\n");
  else if (grade >= 60.0)
    printf("Your letter grade for CMPSC 131 is D.\n");
  else
    printf("Your letter grade for CMPSC 131 is F.\n");
 
    return 0;
}

  