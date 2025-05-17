#include<iostream>
using namespace std;
void diamond(int n, char op, char cfill);

int main()
{
	int n ;
	cin >> n;
	diamond(n, '*', ' ');
}

void diamond(int n,char op,char cfill){
/********* Begin *********/
    //定义函数diamond
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i;++j){
            cout<<op;
        }
        for(int j=1;j<2*i-1;++j){
            cout<<cfill;
        }
        for(int j=0 ; j<=n-i; j++){
            cout<<op;
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=0 ; j<=n-i; j++){
            cout<<op;
        }
        for(int j=0 ; j<2*i-2; j++){
            cout<<cfill;
        }
        for(int j=0 ; j<=n-i; j++){
            cout<<op;
        }
        cout<<endl;
    }


    
    
/********* End *********/
}