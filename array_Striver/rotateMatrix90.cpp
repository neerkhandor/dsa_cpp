
#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        rotated[j][n - i - 1] = matrix[i][j];
        }
    }
    return rotated;
}
vector < vector < int >> rotate180(vector < vector < int >> & matrix) {
    int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[n-i-1][n -j-1] = matrix[i][j];
        }
    }
    return rotated;
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"hello"<<endl;
    vector < vector < int >> rotated = rotate180(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
        cout << rotated[i][j] << " ";
    }
    cout << endl;
    }

}
