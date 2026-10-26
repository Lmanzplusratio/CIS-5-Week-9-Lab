#include <iostream>

// Lab 9 — Isaiah Salvatierra
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

using std::cout;
using std::endl;

double average(const int a[], int n); // Function prototype

void printSummary(double avg); // Function protoype

int main() { // We will call the function inside the main function
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  double avg = (average(scores, N)); // Calling the funcion inside the main function here. Also setting double avg = to the return we get from the the other functions so it can keep that value, otherwise it will go to 0.
  printSummary(avg);
  return 0;
}

double average(const int a[], int n) // Actually working with the function prototype now. This functions job is to compute
{
 if(n==0) // Just evaulate if this is true, doesn't assign it to equal 0 which is important to distinct, we don't want to do that
 {
  return 0; // Allowed to put loops, conditonals etc inside other funcions. More opportunity to be creative
 }
 int sum = 0;
 for(int i = 0; i < n; ++i) sum += a[i];
 return sum * 1.0/n;
 }


void printSummary(double avg) // Actually working with the void summmary now. This functions job here is to print
{
 cout << "The average of the numbers is: " << avg << endl;
}