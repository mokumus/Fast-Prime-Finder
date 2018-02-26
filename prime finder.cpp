//
//  prime finder.cpp
//  Spoj Challanges
//
//  Created by Muhammed Okumuş on 18/11/17.
//  Copyright © 2017 Muhammed Okumuş. All rights reserved.
//

#include "main.h"

/*
 int main(int argc, const char * argv[]) {
	
	int input[10][2];
	int inputSize;
	int i = 0;
	cout << "T:"; cin >> inputSize;
	
	while(i < inputSize){
 cin >> input[i][0] >> input[i][1];
 i++;
	}
	
	cout << endl;
	
	i = 0;
	
	while(i < inputSize){
 primeFinder(input[i][0], input[i][1]);
 i++;
 cout << endl;
	}
	
 return 0;
 }
*/


bool isPrime(int n){
	if(n <= 1)
		return false;
	if(n <= 3)
		return true;
	if(n % 2 == 0 || n % 3 == 0)
		return false;
	else{
		for(int i = 5; i*i <= n; i +=6){
			if(n % i == 0 || n % (i+2) == 0)
				return false;
		}
		return true;
	}
}


void primeFinder(int start,int finish){
	for(int i = start; i <= finish; i++){
		if(isPrime(i))
			cout << i << endl;
	}
}
