#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int i = rand()%4;
	int w=a,x=b,y=c,z=d;
	switch(i){
		case 0:
		d=y;
		c=z;
		break;
		case 1:
		b=w;
		a=x;
		break;
		case 2:
		c=x;
		b=y;
		break;
		case 3:
		d=w;
		a=z;
		break;
	}
	
}