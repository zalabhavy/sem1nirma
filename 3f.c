// grade of student
#include<stdio.h>
int main()
{
    float marks,ct,tuto,se,lpw,see;
   float score;
    //marks = 100;
  /*  ct =0.12*marks;
    tuto=0.12*marks;
    se =0.16*marks;
    lpw = 0.2*marks;
    see = 0.4*marks;
    */
printf("enter marks of ct");
scanf("%f",&ct);
printf("enter marks of tuto");
scanf("%f",&tuto);
printf("enter marks of se");
scanf("%f",&se);
printf("enter marks of lpw");
scanf("%f",&lpw);
printf("enter marks of see");
scanf("%f",&see);
    score =0.12 * ct + 0.12 * tuto + 0.16 * se + 0.20 * lpw + 0.40 * see;
printf("your marks is %f",score);

    if(score>90)
    {
        printf("your grade is A+");
    }
    else if(score<=90 && score>80)
    {
        printf("your grade is A");
    }
    else if(score>70 && score<=80)
    {
        printf("your grade is B+");
    }
    else if(score>60 && score<=70)
    {
        printf("your grade is B");
    }
     else if(score>50 && score<=60)
    {
        printf("your grade is C+");
    }
     else if(score>40)
     {
        printf("your grade is C");
     }
      else if(score<40)
    {
        printf("your fail");
    }
    return 0;
    

}