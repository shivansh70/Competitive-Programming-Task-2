#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void answer(int ind, int array[6], int num1){
	for(int u=6; u>ind;u=u-1){
	 array[u]=array[u-1];
	 }

	array[ind]=num1;

	for(int i=0; i<=6; i++){
	 cout << array[i]<<"\n";
	 }
	return;
}


int main(){
	int num;int index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter index:";
	cin>>index;

    answer(index,arr,num);


	return 0;

}
