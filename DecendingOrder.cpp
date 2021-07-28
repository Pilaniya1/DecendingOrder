#include<bits\stdc++.h>
using namespace std;
main(){
    double darray[]={1.12,2.12,3.33,4.43,5.36};
    double *dp= darray + 4;
    for(int i=0;i<5;i++)
    cout<<*(dp-i)<<"\n";
    return 0;

}

   