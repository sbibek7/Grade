#include<stdio.h>
#include <string.h>
struct student {
  short student_id;
  char name[40][40];
  char gender[0][40];
  char section[0][40];
  char semester[1][40];
};
struct marks {
  short m1[3][40];
  short ccp[3][40];
  short caed[3][40];
  short ccplab[3][40];
  short eln[3][40];
  short chem[3][40];
  short evs[3][40];
};
void main()
{
  struct student s1;
  struct marks m1;
  /* menu driven System
  printf("===============================\n");
  printf("||  OPERATION     ||  OPTION ||\n");
  printf("===============================\n");
  printf("|| Insertion      ||   1     ||\n");
  printf("|| Deletion       ||   2     ||\n");
  printf("|| View           ||   3     ||\n");
  printf("|| Update         ||   4     ||\n");
  printf("|| Search         ||   5     ||\n");
  printf("==============================\n");
  switch (case)
  {
  case 1: insertion();
  break;
  case 2: deletion();
  break;
  case 3: view();
  break;
  case 4: update();
  break;
  case 5: search();
  break;
  default: printf("Invalid Option \n");
  break;
}
  */
  for (int i = 0; i < 1; i++) {
    printf("Enter the details of the %d student\n",i+1);
    printf("Enter Name\n");
    scanf("%c",&s1.name[i]);
    printf("Enter section\n");
    scanf("%s",&s1.section[i]);
  printf("Enter The marks\n");
  printf("Engineering Maths-1\n");
  scanf("%d",&m1.m1);
  printf("CCP\n");
  scanf("%d",&m1.ccp);
  printf("Engineering Chemistry\n");
  scanf("%d",&m1.chem);
  printf("CCP Lab\n");
  scanf("%d",&m1.ccplab);
  printf("CAED\n");
  scanf("%d",&m1.caed);
  printf("Electronics\n");
  scanf("%d",&m1.eln);
  printf("EVS\n");
  scanf("%d",&m1.evs);
}

for (int i = 0; i < 1; i++) {
  printf("The name is %c \n",s1.name[i]);
  printf("Section %c \n",s1.section[i]);
  printf("||                                 Marks                             ||\n", );
  printf("_______________________________________________________________________\n", );
  printf("Maths-1 = %d\n",m1.m1[i]);
  printf("CCP = %d\n",m1.ccp[i]);
  printf("CCP Lab = %d\n",m1.ccplab[i]);
  printf("Chemistry = %d\n",m1.chem[i]);
  printf("CAED = %d\n",m1.caed[i]);
  printf("Electronics = %d\n",m1.eln[i]);
  printf("EVS = %d\n",m1.evs[i]);
  printf("||------------------------------------------------------------------------------------------------||\n");
  printf("||                                 Marks                                                          ||\n");
  printf("||------------------------------------------------------------------------------------------------||\n");
  printf("||Name                || E. Maths-1 || CCP  || Chemistry || Electronics || CAED || CCP Lab || EVS ||\n");
  printf("||------------------------------------------------------------------------------------------------||\n");
  printf("'||' %s    '||'  %d        '||' %d   '||' %d        '||' %d          '||' %d   '||' %d      '||' %d  '||'\n",s1.name[i],m1.m1[i],m1.ccp[i],
m1.chem[i],m1.eln[i],m1.caed[i],m1.ccplab[i],m1.evs[i]);
}
}
