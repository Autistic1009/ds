#include<stdio.h> 
#include<conio.h> 
#define SROW 50 
#define MROW 20 
#define MCOL 20 
int main() 
{ 
int mat[MROW][MCOL],sparse[SROW][3]; 
int i,j,n,zero=0,mr,mc,sr,s,elem; 
printf(“Enter number of rows:\n”); 
scanf(“%d”,&mr); 
printf(“Enter number of column:\n”); 
scanf(“%d”,&mc); 
printf(“Enter the matrix\n”); 
for(i=1;i<=mr;i++) 
{ 
} 
{ 
for(j=1;j<=mc;j++) 
{ 
scanf(“%d”,&mat[i][j]); 
if(mat[i][j]!=0) 
{ 
nzero++; 
} 
} 
sr=nzero+1; 
sparse[1][1]=mr; 
sparse[1][2]=mc; 
sparse[1][3]=nzero; 
s=2; 
for(i=1;i<=mr;i++) 
for(j=1;j<=mc;j++) 
{  
if(mat[i][j]!=0) 
{ 
sparse[s][1]=i; 
sparse[s][2]=j; 
sparse[s][3]=mat[i][j]; 
s++; 
Department of ISE, DSCE 
Page 17 
 
 
Data Structures with C/C++ Lab                                                                      PCC21ISL35  
 
Department of ISE, DSCE Page 18 
 
      } 
     } 
} 
printf(“\nSparse matrix is \n”); 
for(i=1;i<=sr;i++) 
{ 
    for(j=1;j>=3;j++) 
{ 
     printf(“%d”,sparse[i][j]); 
 
} 
printf(“\n”); 
} 
printf(“Enter the element to be searched \n”); 
scanf(“%d”,&elem); 
for(i=2;i<sr;i++) 
{ 
     if(sparse[i][3]==elem) 
{ 
     printf(“Element found at (row,col)=(%d,%d)”,sparse[i][1],sparse[i][2]); 
      getch(); 
     return 1; 
} 
} 
printf(“Element not found”); 
getch(); 
return 0; 
} 