#include<bits/stdc++.h>
using namespace std;


/* Returns Random Number as Integer */
int nextRandomInt(int x, int a, int c, int m,int n)
{
      int d[100];
    int xi = (a*x + c) % m;



    return xi;
}

int main()
{
    int n, a, c, x, m;
    printf("Enter value of x(seed value): ");
    scanf("%d", &x);
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of m: ");
    scanf("%d", &m);
   printf("Enter total random number to be generated: ");
    scanf("%d", &n);

     int i,j,flag=0;
     double re[10];
    for(i=1; i<n; i++) {

        x = nextRandomInt(x, a, c, m,n);

        double r = (double)x/(double)m;
           re[i]=r;
           for( j=0;j<i;j++){
             if(re[j]==re[i]){
                flag=1;
             }
           }

           if(flag==1){
             break;
           }
           cout<<"Random numbres is :"<<re[i]<<endl;



    }

    return 0;
}
