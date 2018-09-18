#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double niz[100];
	double verx[100];
	int n,ee,m,i,j,z,o,d,r,x,imin,jmax,imax,var;
	
	cout << "¬ведите N:" << endl;
	cin>>n;

    m=ee=n;

	cout<<"Vvedite variant vvoda: 1: zadannii 2: ruchnoi";
	cin>>var;
	
	double **a;
	a=new double*[n*n];
	for(i=0; i<n*m; i++)
		a[i]=new double[n*n];
	z=1;
	o=0;d=0;
	switch(var)
	{
	case 1:
	for(i=1; i<n+1; i++)
	{cout<<endl;
	for(j=1; j<n+1; j++)
	{
		
	a[i][j]=i*1;
	cout<<a[i][j]<<setw(3);
	}} break;
	case 2:
		for(i=1; i<n+1; i++)
			for(j=1; j<n+1; j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];}
			for(i=1; i<n+1; i++)
	{cout<<endl;
	for(j=1; j<n+1; j++)
	{
	cout<<a[i][j]<<setw(3);
			}}
		break;
	}
	for(i=0; i<n; i++)
	for(j=0; j<n; j++)
	if (i=j)
for (r=i; r<n; r++)
{	
	
	verx[++d]=a[i][r+1];
}



for (i=0; i<n+1; i++)
for (j=n-i+1; j<n; j++)
		niz[++o]=a[i][j];
		
	cout<<endl;
	cout<<endl;
	cout<<"Elementi po/nad diagonal9mi soglasno yslovi9:"<<endl;	
	for (i=1; i<(((n*n)-n)/2)+1; i++) 
		cout<<verx[i]<<setw(3);
cout<<endl;
for (i=1; i<(((n*n)-n)/2)+1; i++) 
		cout<<niz[i]<<setw(3);
cout<<endl;

	    
	imin=verx[1];
	imax=niz[1];

		for (i=1; i<60; i++)  
{   if (verx[5]<imin)  { imin=verx[i];} }
    for (i=1; i<60; i++)
{   if (niz[i]>imax) { imax=niz[i]; }}
cout<<endl;
cout<<"min element: ";
cout<<endl;
cout<<imin;
cout<<endl;
cout<<"max element ";
cout<<endl;
cout<<imax;
cout<<endl;

system("pause");
return 0;
}
	






