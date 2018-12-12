#include<iostream>
using namespace std;
int main(){
	int index = 0;
	char A[100];
	char B[100];
	cin>>A>>B;
	for(int i=0;A[i]!='\0';i++){
		for(index=0;B[index]!='0';index++){
			if(A[i+index]==B[index]){
				break;
			}
			if( B [index]!='\0')
			cout<<"yes"<<endl;
		}
	}

}
