#include<stdio.h>
#include<string.h>

void sort(int array[], int size)
{
    for (int i=0; i < size - 1; i++){
        for (int j=0; j < size - 1; j++){
            if (array[j] < array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void printArray(int array[], int size)
{
    printf("[");
    for (int i=0; i < size; i++)
        printf("%d ",array[i]);
    printf("]");
}*/
void main(){
 
//--------------------------Multidimensional arrays (2D in this case)-------------------------------
   int numbers[2][3]={
                     {1,2,3},
                     {4,5,6}
                     };

int numbers[3][3];

int rows=sizeof(numbers)/sizeof(numbers[0]);
int columns=sizeof(numbers[0])/sizeof(numbers[0][0]);

printf("rows: %d\n",rows);
printf("colums: %d\n",columns);

numbers[0][0]=1;
numbers[0][1]=2;
numbers[0][2]=3;
numbers[1][0]=4;
numbers[1][1]=5;                    
numbers[1][2]=6;
numbers[2][0]=7;
numbers[2][1]=8;                    
numbers[2][2]=9;

for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
        printf("%d ",numbers[i][j]);
    }
    printf("\n");
}
 
 //-------------------------------Array of Strings (2D in this case)---------------------------

char cars[][10] = {"Mustang","Corvette","Camaro"};

strcpy(cars[0],"Tesla");

for (int i=0;i < sizeof(cars)/sizeof(cars[0]);i++){
    printf("%s\n", cars[i]);
}

//------------------------------Swapping values of two arrays----------------------------------

char x[15] = "X";
char y[15] = "Y";
char temp[15];

strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);

printf("x = %s\n",x);
printf("y = %s\n",y);

//-----------------------------Sorting an integer array------------------------------------------

int array[] ={9,2,5,6,4,6,1};
int size = sizeof(array)/4;

sort(array, size);
printArray(array, size);


//struct = collection of related members ("variables")
//          they can be of different data types
//          listed under one name in a block of memory
//          very similar to classes in other languages (but no methods)


//----------------------------- Structs ------------------------------------------------------

struct Player
{
    char name[12];
    int score;
};

struct Player player1;
struct Player player2;

strcpy(player1.name, "Bro");
player1.score = 4;

strcpy(player2.name, "Bruh");
player2.score = 5;

printf("%s\n", player1.name);
printf("%d\n", player1.score);

printf("%s\n", player2.name);
printf("%d\n", player2.score);


//------------------------------- Array of structs ------------------------------------------

struct Student
{
    char name[12];
    float gpa;
};

struct Student student1 = {"Spongebob", 3.0};
struct Student student2 = {"Patrick", 2.5};
struct Student student3 = {"Sandy", 4.0};
struct Student student4 = {"Squidward", 2.0};

struct Student students[] = {student1, student2, student3, student4};

for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
{
    printf("%-10s\t", students[i].name);
    printf("%.2f\n", students[i].gpa);
}
*/



}
