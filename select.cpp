//SELECT SORT
#include<iostream>

//PARTITION
int partition(int a[],int m,int n)
{
int v,i,j;
v=a[m];
i=m;
j=n+1;
do{

do{i++;
}
while(!(a[i]>=v)&&(i!=n+1));

do{
j--;
}
while(!(a[j]<=v));

//interchange
if(i<j)
{
 int temp;
   temp=a[i];
     a[i]=a[j];
        a[j]=temp;
}

}
   while(!(i>=j));
 
      a[m]=a[j];
         a[j]=v;
            return j;

};



//SELECT_SORT
int select(int a[],int n,int k)
{
int low,up,p;
low=0;
up=n;
do{
p=partition(a,low,up);

if(p==k)
{std::cout<<k<<"th SMALLEST ELEMENT IS:=  "<<a[p]<<"\n";
return 0;}

else {if(k<p)
up=p;
else
low=p+1;
}

}while(1);


};







int main()
{
int n,k;
int *a;
std::cout<<"\tENTER HOW AMNY ELEMENTS REQUIRED(SIZE OF ARRAY OF ELEMENTS) : ";
std::cin>>n;

a=new int[n];

std::cout<<"NOW ENTER THE ELEMENTS OF ARRAY:  \n";
for(int i=0;i<n;i++)
std::cin>>a[i];

std::cout<<"ENTER number to find smallest xth element : ";       

std::cin>>k;


select(a,n-1,k-1);

    return 0;

}








