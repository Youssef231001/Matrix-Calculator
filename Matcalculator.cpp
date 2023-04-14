#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     double mat1[10][10];
     double mat2[10][10];
     int a,b,c,d,e;
     cout<<"Please enter dimensions of Matrix A:"<<"\n";
     cin>>a>>b;
     cout<<"Please enter dimensions of Matrix B:"<<"\n";
     cin>>c>>d;
     cout<<"Please enter values of Matrix A:"<<"\n";
     for (int i=0; i<a; i++)
     for (int j=0; j<b; j++)
     cin>>mat1[i][j];
     cout<<"Please enter values of Matrix B:"<<"\n";
     for (int i=0; i<c; i++)
     for (int j=0; j<d; j++)
     cin>>mat2[i][j];
     do
     {
     cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<"\n";
     cin>>e;
     //sum
     if (e==1)
     {
     if (a==c && b==d)
     {
      for (int i=0; i<a; i++)
     {
     for (int j=0; j<b; j++)
     cout<< llround( mat1[i][j] + mat2[i][j] ) <<" ";
     cout<<"\n";
     }
     }
     else
     cout<<"The operation you chose is invalid for the given matrices."<<"\n";
     }
     //difference
     if (e==2)
     {
     if (a==c && b==d)
     {
      for (int i=0; i<a; i++)
     {
     for (int j=0; j<b; j++)
     cout<< llround( mat1[i][j] - mat2[i][j] ) <<" ";
     cout<<"\n";
     }
     }
     else
     cout<<"The operation you chose is invalid for the given matrices."<<"\n";
     }
     //Multiplication
     if (e==3)
     {
     if (b==c)
     {
     int f=0 , h=0 , g=0;
     do
     {
     for (int j=0; j<b; j++)
     f += mat1[h][j] * mat2[j][g];
     cout <<llround(f)<<" ";
     f=0;
     g++;
     if (g==d)
     {
     h++;
     g=0;
     cout<<"\n";
     }
     }
     while (h<a);
     }
     else
     cout<<"The operation you chose is invalid for the given matrices."<<"\n";
     }
     //3*3 matrix Determinant
     if (e==5)
     {
     if (a==b)
     {
     int k = mat1[0][0] * (mat1[1][1] * mat1[2][2] - mat1[2][1] * mat1[1][2]);
     int l = mat1[0][1] * (mat1[1][0] * mat1[2][2] - mat1[2][0] * mat1[1][2]);
     int m = mat1[0][2] * (mat1[1][0] * mat1[2][1] - mat1[2][0] * mat1[1][1]);
     cout<< llround(k-l+m) <<"\n";
     }
     else
     cout<<"The operation you chose is invalid for the given matrices."<<"\n";
     }
     if (e==6)
     {
     if (c==d)
     {
     int n = mat2[0][0] * (mat2[1][1] * mat2[2][2] - mat2[2][1] * mat2[1][2]);
     int o = mat2[0][1] * (mat2[1][0] * mat2[2][2] - mat2[2][0] * mat2[1][2]);
     int p = mat2[0][2] * (mat2[1][0] * mat2[2][1] - mat2[2][0] * mat2[1][1]);
     cout<< llround(n-o+p) <<"\n";
     }
     else
     cout<<"The operation you chose is invalid for the given matrices."<<"\n";
     }
     }
     while (e != 7);
     cout<<"Thank you!";
}

