//Aya Rafe' Daraghma
//11924594

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




//to print the sequence of moves that go you the solution
/*
* for (int i = 0; i <= numof_weap; i++)
{
	for (int j = 0; j <= vib_val; j++)
	{
		if (AYA[i][j] < 10) {
			cout << "[" << AYA[i][j] << ", " << AYA[i][j] << "]";
		}

		else {
			cout << "[" << AYA[i][j] << ", " << AYA[i][j] << "]";
		}
	}
	cout << endl;
}
*/


//(divide and conquer) code to solve the question.

int FUNCTION(int numof_weap, int vib_val, int C[], int P[])
{
	int AYA[numof_weap + 1] [vib_val + 1];
	
	for (int i = 0; i<numof_weap; i++)
	{
		for (int j = 0; j <= vib_val; j++)
		{
			if (i == 0 || j == 0) 
				AYA[i][j] = 0;
			else if (C[i - 1] > j)
				AYA[i][j] = AYA[i - 1][j];

			else
				AYA[i][j] = max(P[i - 1] + AYA[i] - C[i - 1], AYA[i - 1][j]);
			}
		}
	return AYA[numof_weap][vib_val];
}   




int main() {
	int numof_container, numof_weap, vib_val, container_cost;
	cin >> numof_container >> numof_weap >> vib_val >> container_cost;

	int C[numof_weap];
	int P[numof_weap];
	vib_val = vib_val - container_cost;

	for (int k = 0; k < numof_weap; k++) {
		cin >> C[k];
	}
	for (int k = 0; k < numof_weap; k++) {
		cin >> P[k];
}
		cout << FUNCTION(numof_weap, vib_val, C, P);



		return 0;
}


