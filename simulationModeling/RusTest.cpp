#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,i;
 double random[100];
 cout<<"Enter total  number:";
 cin>>n;

 cout<<"Random Number are :"<<endl;

 for(i=0;i<n;i++){
      printf("Number#%d: ", (i+1));
      cin>>random[i];
 }

 int run=0;
 int up=1;
  for(i=1;i<n;i++){
    if(up){

        if(random[i]>random[i-1]){
            cout<<"+";
        }else{
          up=0;
          run++;
           cout<<"-";
        }
    }else{

           if(random[i]<random[i-1]){
            cout<<"-";
           }else{

             up=1;
             run++;
              cout<<"+";
           }

    }


  }

  double u=(2*n-1.0)/3.0;
  double sigma_squre=(16*n- 29.0)/90.0;
  double z=(run-u)/sqrt(sigma_squre);

  cout<<"Run"<<run<<endl;
  cout<<"sigma:"<<setprecision(2)<<sigma_squre<<endl;
  //cout<<setprecision(2)
  cout<<"z:"<<setprecision(2)<<z<<endl;


}
