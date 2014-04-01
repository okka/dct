#include <iostream>
#include <math.h>
#include <string>
#define _USE_MATH_DEFINES
using namespace std;
bool isindico(string dic[1000], string p, int n);

int main()
{
	
	int n=4;
	int pix[n][n];
	double F[n][n];
	double FF[n][n];
	double c[n];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>pix[i][j];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<" "<<pix[i][j];
		cout<<endl;
	}	
	for (int i=1;i<n;i++) {
            c[i]=1;
    }
    c[0]=1/sqrt(2.0);
        
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			double sum=0;
			for(int x=0; x<n; x++)
				for(int y=0; y<n; y++)
					sum+=cos((2*x+1)*i*M_PI/(2*n))*cos((2*y+1)*j*M_PI/(2*n))*pix[x][y];
			sum*=c[i]*c[j]/2;
			F[i][j]=sum;
		}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<" "<<F[i][j];
		cout<<endl;
	}			
		
	for(int x=0; x<n; x++)
		for(int y=0; y<n; y++){
			double sum=0;
			for(int i=0; i<n; i++)
				for(int j=0; j<n; j++)
					sum+=cos((2*x+1)*i*M_PI/(2*n))*cos((2*y+1)*j*M_PI/(2*n))*c[i]*c[j]*F[i][j];
			sum=sum*2/n;
			FF[x][y]=sum;
		}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<" "<<FF[i][j];
		cout<<endl;
	}		
	
	cout<<endl;
	return 0;
}
	//ex for n=4
	/*
100
150
150
100
100
100
150
150
200
100
100
150
100
200
100
100
*/
