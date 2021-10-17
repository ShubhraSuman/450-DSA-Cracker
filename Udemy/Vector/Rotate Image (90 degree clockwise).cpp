#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        // your code goes here
      for (unsigned int i = 0; i < matrix.size(); ++i) {
		for (unsigned int j = 0; j < matrix[0].size(); ++j) {
		    cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
      }
        int temp;
    for (unsigned int i = 0; i < matrix.size(); ++i) {
		for (unsigned int j = i; j < matrix[0].size(); ++j) {
			temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
    int left = 0,right = matrix.size()-1;
    while(left<=right)
    {
            for(unsigned int j=0;j<matrix[0].size();j++)
           {
               swap(matrix[j][left] , matrix[j][right]);
           }
           left++;
           right--;
    }
}
