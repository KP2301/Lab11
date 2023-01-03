//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    double count = 0;
    double sum = 0, sum2 = 0 ;
    string score;
    ifstream source("score.txt");
    while(getline(source , score)){
        sum += atof(score.c_str());
        sum2 += pow(atof(score.c_str()), 2);
        count++ ;
    }
    double Mean = sum/count ;
    double Standard_divia = sqrt((sum2/count) - pow(Mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = " << Standard_divia ;
    return 0 ;
}