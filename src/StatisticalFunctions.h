#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
using namespace std;

void mean();
void standardDeviation();
void variance();
void linearRegression();
void quadraticRegression();
void logrithamicRegression();
void exponentialRegression();
bool is_statrunning = true;
void selStatisticalFunc()
{

    while(is_statrunning)
    {

        cout<<"1. Mean\n2. Standard Deviation\n3. Variance\n4. Linear Regression\n5. Quadratic Regression\n6. logrithimic Regression\n7. Exponential Regression\n8. EXIT"<<endl;
        int usrinp;cin>>usrinp;
        switch(usrinp)
        {
            case 1: mean();break;
            case 2: standardDeviation();break;
            case 3: variance();break;
            case 4: linearRegression();break;
            case 5: quadraticRegression();break;
            case 6: logrithamicRegression();break;
            case 7: exponentialRegression();break;

            case 8: is_statrunning = false;break;
            default:cout<<"Please Enter a Valid Selecion!"<<endl;
        }
    }
}
// #TODO
// rewrite whole mean funcion using vector
void mean()
{
    // re write the whole code using vector
    int val1;
    cout<<"Enter the number of values:"<<endl;cin>>val1;
    static int entval = val1;
    // this statc will cause prole when ran for the second time
    int arr[entval];
    int arrlen1 = sizeof(arr)/sizeof(arr[0]);

    int total = 0;
    for(int i = 0;i<arrlen1;i++)
    {
        total += arr[i];
    }

    int mean = total / val1;
    cout<<"The mean is: "<<mean<<endl;
}

void standardDeviation()
{

    int val1;
    cout<<"Enter the number of values: ";cin>>val1;
    
    vector<double> arr(val1);
    for (int i = 0; i < val1; i++)
    {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // calc mean
    double total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        total += arr[i];
    }
    double mean = total / val1;

    
    double squaredDiffSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
    
        squaredDiffSum += pow(arr[i] - mean, 2); 
    }
    double variance = squaredDiffSum / val1;
    double stdDeviation = sqrt(variance);
    cout << "The mean is: " << mean << endl;
    cout << "The standard deviation is: " << stdDeviation << endl;
}

void variance()
{
    vector<double> arr = {2, 4, 4, 4, 6};
    int N = arr.size();

    // calc mean
    double total = 0;
    for (int i = 0; i < N; i++) {
        total += arr[i];
    }
    double mean = total / N;


    double squaredDiffSum = 0;
    for (int i = 0; i < N; i++) {
        
        squaredDiffSum += pow(arr[i] - mean, 2); 
    }
    double variance = squaredDiffSum / N;

    cout << "The Variance is: " << variance << endl; 

    
}

void linearRegression()
{

    vector<double> x = {1, 2, 3, 4, 5};
    vector<double> y = {55, 62, 75, 83, 91};
    int N = x.size();

    double sumX = 0, sumY = 0;
    for (int i = 0; i < N; i++) {
        sumX += x[i];
        sumY += y[i];
    }
    double meanX = sumX / N;
    double meanY = sumY / N;

    double numerator = 0;
    double denominator = 0;
    
    for (int i = 0; i < N; i++) {
        numerator += (x[i] - meanX) * (y[i] - meanY);
        denominator += (x[i] - meanX) * (x[i] - meanX); // Variance of X
    }

    double m = numerator / denominator;
    double b = meanY - (m * meanX);

    cout << "--- Linear Regression Model ---" << endl;
    cout << "Formula: y = " << m << "x + " << b << endl << endl;

    double inputHours = 6;
    double predictedScore = (m * inputHours) + b;

    cout << "Prediction: If you study for " << inputHours << " hours, ";
    cout << "your predicted score is: " << predictedScore << "%" << endl;

}

void quadraticRegression()
{
    int n;
    cout << "Enter the number of coordinate pairs (X, Y): ";
    cin >> n;
    
    if (n < 3) {
        cout << "Error: Quadratic regression requires at least 3 points." << endl;
        return;
    }

    vector<double> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter X" << (i + 1) << ": "; cin >> x[i];
        cout << "Enter Y" << (i + 1) << ": "; cin >> y[i];
    }

    double sum_x = 0, sum_y = 0, sum_x2 = 0, sum_x3 = 0, sum_x4 = 0, sum_xy = 0, sum_x2y = 0;
    for (int i = 0; i < n; i++) {
        double x2 = x[i] * x[i];
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += x2;
        sum_x3 += x2 * x[i];
        sum_x4 += x2 * x2;
        sum_xy += x[i] * y[i];
        sum_x2y += x2 * y[i];
    }

    double mat[3][4] = {
        {sum_x4, sum_x3, sum_x2, sum_x2y},
        {sum_x3, sum_x2, sum_x,  sum_xy},
        {sum_x2, sum_x,  (double)n, sum_y}
    };

    for (int i = 0; i < 3; i++) {
        if (mat[i][i] == 0) {
            cout << "Calculator Error: Matrix inversion system error." << endl;
            return;
        }
        for (int k = i + 1; k < 3; k++) {
            double factor = mat[k][i] / mat[i][i];
            for (int j = 0; j <= 3; j++) {
                mat[k][j] -= factor * mat[i][j];
            }
        }
    }

    double a, b, c;
    c = mat[2][3] / mat[2][2];
    b = (mat[1][3] - mat[1][2] * c) / mat[1][1];
    a = (mat[0][3] - mat[0][1] * b - mat[0][2] * c) / mat[0][0];

    cout << "--- Quadratic Regression Model ---" << endl;
    cout << "Formula: y = (" << a << ")x^2 + (" << b << ")x + (" << c << ")" << endl;

    double inputX;
    cout << "Enter custom X value to predict Y target: ";
    cin >> inputX;
    double predictedY = (a * inputX * inputX) + (b * inputX) + c;
    cout << "Predicted output Y value: " << predictedY << endl;
}

void logrithamicRegression()
{
    int n;
    cout << "Enter the number of coordinate pairs (X, Y): ";
    cin >> n;
    
    if (n < 2) {
        cout << "Error: Logarithmic regression requires at least 2 points." << endl;
        return;
    }

    vector<double> x(n);
    vector<double> y(n);

    cout << "Note: All X values must be greater than 0!" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter X" << (i + 1) << ": "; cin >> x[i];
        if (x[i] <= 0) {
            cout << "Invalid input! X must be positive for logarithms." << endl;
            return;
        }
        cout << "Enter Y" << (i + 1) << ": "; cin >> y[i];
    }

    double sumLnX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        sumLnX += log(x[i]); 
        sumY += y[i];
    }
    double meanLnX = sumLnX / n;
    double meanY = sumY / n;

    double numerator = 0;
    double denominator = 0;
    
    for (int i = 0; i < n; i++) {
        double lnX = log(x[i]);
        numerator += (lnX - meanLnX) * (y[i] - meanY);
        denominator += (lnX - meanLnX) * (lnX - meanLnX);
    }

    if (denominator == 0) {
        cout << "Calculator Error: Division by zero." << endl;
        return;
    }

    double b = numerator / denominator;
    double a = meanY - (b * meanLnX);

    cout << "--- Logarithmic Regression Model ---" << endl;
    cout << "Formula: y = " << a << " + " << b << " * ln(x)" << endl;

    double inputX;
    cout << "Enter custom X value to predict Y target: ";
    cin >> inputX;
    if (inputX <= 0) {
        cout << "Error: Cannot calculate natural log of 0 or negative numbers." << endl;
        return;
    }
    
    double predictedY = a + b * log(inputX);
    cout << "Predicted output Y value: " << predictedY << endl;
}

void exponentialRegression()
{
    int n;
    cout << "Enter the number of coordinate pairs (X, Y): ";
    cin >> n;
    
    if (n < 2) {
        cout << "Error: Exponential regression requires at least 2 points." << endl;
        return;
    }

    vector<double> x(n);
    vector<double> y(n);

    cout << "Note: All Y values must be greater than 0!" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter X" << (i + 1) << ": "; cin >> x[i];
        cout << "Enter Y" << (i + 1) << ": "; cin >> y[i];
        if (y[i] <= 0) {
            cout << "Invalid input! Y must be positive for exponential math." << endl;
            return;
        }
    }

    double sumX = 0, sumLnY = 0;
    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumLnY += log(y[i]); 
    }
    double meanX = sumX / n;
    double meanLnY = sumLnY / n;


    double numerator = 0;
    double denominator = 0;
    
    for (int i = 0; i < n; i++) {
        double lnY = log(y[i]);
        numerator += (x[i] - meanX) * (lnY - meanLnY);
        denominator += (x[i] - meanX) * (x[i] - meanX);
    }

    if (denominator == 0) {
        cout << "Calculator Error: Division by zero." << endl;
        return;
    }

    double b = numerator / denominator;
    double transformedA = meanLnY - (b * meanX);
    
    double a = exp(transformedA);

    cout << "--- Exponential Regression Model ---" << endl;
    cout << "Formula: y = " << a << " * e^(" << b << " * x)" << endl;

    double inputX;
    cout << "Enter custom X value to predict Y target: ";
    cin >> inputX;
    
    double predictedY = a * exp(b * inputX);
    cout << "Predicted output Y value: " << predictedY << endl;
}