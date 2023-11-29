/*==========================================================

 Title:     Assignment 6 - C++ Basketball Season
 Course:  	CIS 2252
 Author:  	<Mohammed Tanvvir>
 Date:    	<8 /1 / 23>
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <vector>

void alterGameScore(int pArr[], int n) {
    int k;
    cin >> k;
    pArr[n] += k;
}

void printScores(int pArr[], int gameMAX) {
    for (int i = 0; i < gameMAX; i++) {
        cout << pArr[i] << " ";
    }
    cout << endl;
}

int totalScore(int pArr[], int gameMAX) {
    int total =0;
    for (int i = 0; i < gameMAX;i++) {
        total += pArr[i];
    }
    return total;
}

int main() {


	const int gameMAX = 5; 
	int* pArr;
	pArr = new int[gameMAX];

	for (int i = 0; i < gameMAX; i++) {
    	*(pArr + i) = ((i + 2) * 10) + (i + 1); 
	}
	
	int gameNumber;
	cin >> gameNumber;
	
	alterGameScore(pArr, gameNumber - 1); 

	cout << *(pArr + gameNumber - 1) << endl; 
	
	printScores(pArr, gameMAX); 
	
	cout << endl << totalScore(pArr, gameMAX); 
	
	delete[] pArr;
	
	return 0;

}
