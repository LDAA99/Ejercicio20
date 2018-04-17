#include <iostream>

using std::cout;
using std::endl;


int main(){

	double *u;
	double deltat=0.01;
	double deltax=0.1;
	double c=1.0;
	double xmin=0.0;
	double xmax=2.0;
	double T=0.5;
	int N=T/deltat;
	int i;
	int j;
	
	
	int nx= (xmax-xmin)/deltax+1;
	u= new double[nx];
	
	for(i=0;i<nx; i++){
		x=xmin+i*deltax	
		if(x>0.75 && x<=1.25){
			u[i]=1.0;
}
}



	return 0;
}




