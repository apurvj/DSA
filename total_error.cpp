#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int count=0;
    double a,sum=0,x=0.005,n,Etol=0.000001,Ea=0,Etrue=0,tr,str;
    cout<<"Enter any positive  number:"<<endl;
    cin>>n;
    cout<<"**Format**"<<endl;
    cout<<"(approximate percent relative error ,true percent relative error)"<<endl;
    cout<<endl;
    tr=sqrt(n);
    do
    {
        a=x+(n/x);//Here a is the numerator of the alogorithm x[i+1]=(x[i]+a/x[i])/2//
        sum=a/2;//To x[i+1]=(x[i]+a/x[i])/2 //
        Ea=((sum-x)/sum)*100;//Ea stores the approximate percent relative error//
        Etrue=((tr-sum)/tr)*100;//Etrue stores the true percent relative error//
        x=sum;// x is the temporary variable that stores the prevoius value for the next iteration//
        if(abs(Etrue)<Etol)
        {
              if(count==0)
              {
                  str=Etrue;
                  count=count+1;
              } 
        }
           cout<<"("<<abs(Ea)<<","<<abs(Etrue)<<")"<<endl;
    }while(abs(Ea)>=Etol);
    cout<<endl;
    cout<<endl;
    cout<<"**Final Result**"<<endl;
    cout<<"("<<abs(Ea)<<","<<abs(str)<<")"<<endl;
}