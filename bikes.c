#include<stdio.h>
#include<string.h>

#define SIZE 2 // the number of brands for which data is entered
struct Bikes
{
 char brand[100];
 char name[100];


};
int main()
{

    struct Bikes bike[100]; // an array of structre Bikes
    int index=0;
    while(index<SIZE)
        {
            fgets(bike[index].brand,100,stdin);
            fgets(bike[index].name,100,stdin);

            index++;

        }
        printf("enter brand name to search\t");
  char inputBrandName[100];
  fgets(inputBrandName,100,stdin);
  index=0;
  while(index<SIZE)
    {
        bike[index].brand[strcspn(bike[index].brand,"\n")]='\0';
        bike[index].name[strcspn(bike[index].name,"\r")]='\0';
        inputBrandName[strcspn(inputBrandName,"\n")]='\0';
        if(strcmp(inputBrandName,bike[index].brand)==0)
            {
             puts("model name is :");
             puts(bike[index].name);
             return 0;
            }
  index++;
    }
}
