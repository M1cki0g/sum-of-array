#include <iostream>

using namespace std;

int sumArray(int t[] , int n){
    int sum=0;
for(int i=0 ; i<n ; i++)
    sum += t[i];
return sum;
}

int main()
{int n,i=0;
cout<<"enter nbr of ele:"<<endl;
cin>>n;

int t[n];

cout<<"enter nbr:"<<endl;
for(i=0;i<n;i++){
    cin>>t[i];
}

int s=sumArray(t , n);
cout<<s;





    return 0;
}
