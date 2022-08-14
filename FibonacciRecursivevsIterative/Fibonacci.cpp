#include <iostream>
#include <ctime>

//Muhammed Serhan Genis
//30.07.2022
using namespace std;


int fibonacciWithIteration(int number);
int fibonacciWithRecursion(int number);
int main(){
	
	int number;
	cout<<"Enter a number(Try with higher numbers to see time difference) :";
	cin>>number;
    cout <<endl;
    
    time_t start1, end1,start2, end2;

    cout<<"The fibonacci number is:"<<endl;
    time(&start1);
	cout<<"With Recursive Method: "<< fibonacciWithRecursion(number);
	time(&end1);
	cout<<" --> Took "<< float(difftime(end1, start1))<<" seconds...";
	
	cout <<endl;
	
	time(&start2);
	cout<<"With Iterative Method: "<< fibonacciWithIteration(number);
	time(&end2);
	cout<<" --> Took "<< float(difftime(end2, start2))<<" seconds...";;
	
	
	

}

int fibonacciWithRecursion(int number){
	
	if(number==0||number==1){
		return number;
	}
	
	return fibonacciWithRecursion(number-1)+fibonacciWithRecursion(number-2);
	
}

int fibonacciWithIteration(int number){
	int no1=0;
	int no2=1;
	int sum=no1+no2;
	if(number==0||number==1){
		return number;
	}
	
	for(int i=1;i<number;i++){
		
		sum=no1+no2;
		no1=no2;
		no2=sum;
	
	}
	
	return sum;
	
}
