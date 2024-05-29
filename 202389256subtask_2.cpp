#include  <iostream>
#include <ctime>
using namespace std;

void waitForFiveMinutes() {
	const int minutes = 1;
	const clock_t wait_time = minutes * 60 * CLOCKS_PER_SEC;
	
	clock_t  start_time = clock();
	while  ((clock() - start_time)  < wait_time);
	
}
int main() {
    int temp1, temp2, temp3;
    
    cout << "Enter the first temperature reading:";
    cin  >> temp1;
    waitForFiveMinutes();
    
    cout <<"Enter the second tempetature reading:";
           cin >> temp2;
    
    if (temp2 -temp1 > 50) {
           cout << "reduce fryer heat before taking the third reading./n";
    }
    else if  (temp2 -temp1 < 10){
        cout << "Increase the fryer heat before tqing the third reading./n";
    }
    waitForFiveMinutes();
    
    cout << "Enter the third temperqture reqding:";
         cin >> temp3;
         
   if (temp3 >= 150 && temp3  <= 190)  {
        cout << "you may start frying magwinyas./n ";
   }
   else {
        cout  <<  "is not ready for frying!/n";}
    return 0;
}