#include<stdio.h>
#include<string.h>
struct student {
  int strength;
  char name[40];
  char gender[1];
  char section[0];
  int semester;
} s1[40];
struct marks {
  int m1;
  int ccp;
  int caed;
  int ccplab;
  int eln;
  int chem;
  int evs;
} m1[40];
void list_all();
void insertion();
int n;
int main()
{
  int option;
  printf("===============================\n");
  printf("||  OPERATION     ||  OPTION ||\n");
  printf("===============================\n");
  printf("|| Insertion      ||   1     ||\n");
  printf("|| Deletion       ||   2     ||\n");
  printf("|| View           ||   3     ||\n");
  printf("|| Update         ||   4     ||\n");
  printf("|| Search         ||   5     ||\n");
  printf("==============================\n");
  scanf("%d",&option);
  switch (option)
  {
  case 1: insertion();
  break;
  case 2: printf("Under construction\n");
  break;
  case 3:
  break;
  case 4: printf("Under construction\n");
  break;
  case 5: printf("Under construction\n");
  break;
  default: printf("Invalid Option \n");
  break;
}
return 0;
}
void insertion()
{
  printf("Enter the strength of student\n");
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
  printf("Enter the details of the %d student\n",i+1);
  printf("Enter semester\n");
  scanf("%d",&s1[i].semester);
  printf("Enter Name\n");
  scanf("%s",&s1[i].name[i]);
  printf("Enter section\n");
  scanf("%s",&s1[i].section[i]);
  printf("Enter The marks\n");
  printf("Engineering Maths-1\n");
  scanf("%d",&m1[i].m1);
  printf("CCP\n");
  scanf("%d",&m1[i].ccp);
  printf("Engineering Chemistry\n");
  scanf("%d",&m1[i].chem);
  printf("CCP Lab\n");
  scanf("%d",&m1[i].ccplab);
  printf("CAED\n");
  scanf("%d",&m1[i].caed);
  printf("Electronics\n");
  scanf("%d",&m1[i].eln);
  printf("EVS\n");
  scanf("%d",&m1[i].evs);
  main();
  }
  void list_all()
  {
    for (int i = 0; i < 40; i++) {
      printf("||------------------------------------------------------------------------------------------------||\n");
      printf("||                                 Marks                                                          ||\n");
      printf("||------------------------------------------------------------------------------------------------||\n");
      printf("||Name                || E. Maths-1 || CCP  || Chemistry || Electronics || CAED || CCP Lab || EVS ||\n");
      printf("||------------------------------------------------------------------------------------------------||\n");
      printf(" %s      %d         %d    %d         %d           %d    %d       %d  \n",s1[i].name,m1[i].m1,m1[i].ccp,
    m1[i].chem,m1[i].eln,m1[i].caed,m1[i].ccplab,m1[i].evs);
    }
    main();
  }

}
