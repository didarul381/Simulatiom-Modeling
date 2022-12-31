#include <bits/stdc++.h>
using namespace std;

int main(){

int n,i,excepted;
float obs[20],N=0,final=0.00,Calculation[20],critical;

cout<<"How many calss:";
cin>>n;
  cout<<"Enter the observed frequency:"<<endl;
for(i=0;i<n;i++){
cout<<"Enter observed frequency of "<<i+1<<"th number: "<<endl;
    cin>>obs[i];
}
//frequency
for(i=0;i<n;i++){
    N=N+obs[i];

}
excepted=N/n;
for(i=0;i<n;i++){
    Calculation[i]==(float)((obs[i]-excepted)*(obs[i]-excepted))/excepted;
    final=final+ Calculation[i];
}

    cout<<setw(5)<<"S.No";
    cout<<setw(5)<<"Oi";
    cout<<setw(5)<<"Ei";
     cout<<setw(22)<<"((Oi-Ei)*(Oi-Ei))/Ei"<<endl;

     for(i=0; i<n; i++)
    {
        cout<<setw(5)<<i+1;
        cout<<setw(5)<<obs[i];
        cout<<setw(5)<<excepted;
        cout<<setw(10)<<setprecision(2)<<Calculation[i]<<endl;
    }
      cout<<"-------------------------------------------------------"<<endl;
    cout<<setw(10)<<N;
    cout<<setw(15)<<final;
    cout<<endl;
  cout<<"Enter the critical value:"<<endl;
    cin>>critical;
    if(final<critical)
    {
        cout<<"The test is accepted"<<endl;
    }
    else
    {
        cout<<"The test is rejected"<<endl;
    }



}

