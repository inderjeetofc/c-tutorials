// //program to demonstrate use of struct data type
// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     char name[30];
//     int id;
//     float salary;
// };
// int main()
// {
//     struct employee e1,e2,e3;
//     strcpy(e1.name,"sonu");
//     strcpy(e2.name,"inderjeet");
//     strcpy(e3.name,"inder");
//     e1.id=254;
//     e2.id=854;
//     e3.id=294;
//     e1.salary=110000.6589;
//     e2.salary=150000.368;
//     e3.salary=70000.25;
//     printf("%s\n%s\n%s\n",e1.name,e2.name,e3.name);
//     printf("%d\n%d\n%d\n",e1.id,e2.id,e3.id);
//     printf("%.3f\n%.2f\n%.9f\n",e1.salary,e2.salary,e3.salary);
//     return 0;
// }

// // defining variable of type employee
// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     char name[30];
//     int id;
//     float salary;
// };
// int main()
// {
//     struct employee staff[3];
//     strcpy(staff[0].name,"rajji");
//     strcpy(staff[1].name,"inderjeet");
//     strcpy(staff[2].name,"inder");
//     staff[0].id=254;
//     staff[1].id=854;
//     staff[2].id=294;
//     staff[0].salary=110000.6589;
//     staff[1].salary=150000.368;
//     staff[2].salary=70000.25;
//     printf("%s\n%s\n%s\n",staff[0].name,staff[1].name,staff[2].name);
//     printf("%d\n%d\n%d\n",staff[0].id,staff[1].id,staff[2].id);
//     printf("%.1f\n%.2f\n%.3f\n",staff[0].salary,staff[1].salary,staff[2].salary);
//     return 0;
// }

// //pointer to structure
// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int id;
//     char name[20];
//     float salary;
// };
// int main()
// {
//     struct employee staff[3], *ptr;
//     ptr = &staff[0];
//     // (*ptr).id = 1; //using . operator
//     ptr->id = 189; //using arrow operator
//     // (*ptr).salary = 14569.536;
//     ptr->salary = 186569.536;
//     // strcpy((*ptr).name, "inderjeet");
//     strcpy(ptr->name, "sonu");
//     printf("%d\n",staff[0].id);
//     printf("%0.3f\n",staff[0].salary);
//     printf("%s\n",staff[0].name);
//     return 0;
// }

// passing struct to a function

// #include <stdio.h>
// struct employee
// {
//     int id;
//     char name[20];
//     float salary;
// };
// void show(struct employee emp)
// {
//     printf("%d\n", emp.id);
//     printf("%0.3f\n", emp.salary);
//     printf("%s\n", emp.name);
//     emp.id=56;
// }
// int main()
// {
//     struct employee e1, *ptr;
//     ptr = &e1;
//     strcpy(ptr->name, "vinay");
//     ptr->id = 5689;
//     ptr->salary = 58963.25;
//     show(e1);
//     printf("%d\n", e1.id);
//     return 0;
// }

//program to write 2-D vector using struct

// #include <stdio.h>
// #include <math.h>
// typedef struct vector
// {
//     float x_comp;
//     float y_comp;
// } vector;
// void sumVector(vector c,vector d){
//    float sum= pow(pow((c.x_comp+d.x_comp),2)+pow((c.y_comp+d.y_comp),2),0.5);
//    printf("\nMag of sum of two vectors is : %.2f",sum);
// }
// int main()
// {
//     vector a,b;
//     a.x_comp = 6;
//     a.y_comp = 8;
//     b.x_comp = 3;
//     b.y_comp = 4;
//     float c=pow(a.x_comp,2)+pow(a.y_comp,2);
//     float d=pow(b.x_comp,2)+pow(b.y_comp,2);
//     printf("Vector a magnitude is : %0.2f",pow(c,0.5));
//     printf("\nVector b magnitude is : %0.2f",pow(d,0.5));
//     sumVector(a,b);

//     return 0;
// }

//storing complex numbers as array program

// #include <stdio.h>

// int main()
// {
//     float complex[5][2];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n Enter %dth complex number: ", i+1);

//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%f", &complex[i][j]);
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n The %dth complex number is : ", i+1);

//         for (int j = 0; j < 2; j++)
//         {
//             printf("%.2f ,", complex[i][j]);
//         }
//     }
//     return 0;
// }

//above program using structures
//

//struct to store dates

#include <stdio.h>
struct dateFormat
{
    int day;
    int month;
    int year;
};
void comp(struct dateFormat *tarikh)
{
    for (int i = 0; i < 2; i++)
    {
        if ((tarikh + i)->year == (tarikh + i + 1)->year)
        {
            if ((tarikh + i)->month == (tarikh + i + 1)->month)
            {
                if ((tarikh + i)->day == (tarikh + i + 1)->day)
                {
                    printf("\nBoth dates are equal");
                    break;
                }
                else if ((tarikh + i)->day > (tarikh + i + 1)->day)
                {
                    printf("\nDate :%d -%d -%d > %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
                    break;
                }
                else
                {
                    printf("\nDate: %d -%d -%d < %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
                    break;
                }
            }
            else if ((tarikh + i)->month > (tarikh + i + 1)->month)
            {
                printf("\nDate :%d -%d -%d > %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
                break;
            }
            else
            {
                printf("\nDate: %d -%d -%d < %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
                break;
            }
        }
        else if ((tarikh + i)->year > (tarikh + i + 1)->year)
        {
            printf("\nDate: %d -%d -%d > %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
            break;
        }
        else
        {
            printf("\nDate: %d -%d -%d < %d-%d-%d", (tarikh + i)->day, (tarikh + i)->month, (tarikh + i)->year, (tarikh + i + 1)->day, (tarikh + i + 1)->month, (tarikh + i + 1)->year);
            break;
        }
    }
}
int main()
{
    struct dateFormat date[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\n\t Enter day : - ");
        scanf("%d", &date[i].day);
        printf("\t Enter month : - ");
        scanf("%d", &date[i].month);
        printf("\t Enter year : - ");
        scanf("%d", &date[i].year);
    }
    comp(date);
    return 0;
}