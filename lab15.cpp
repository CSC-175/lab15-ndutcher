#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int &n, int &k){
  while (true) {
      cout << "How many balls (1-12) are in the pool to pick from?" << endl;
      cin >> n;
      if (n > 12 or n < 1){
          cout << "Input Error!" << endl;
      }
      else{
          break;
      }
  }
    while (true) {
        cout << "How many balls (1- " << n << ") will be drawn? " << endl;
        cin >> k;
        if (k > n or k < 1){
            cout << "Input Error!" << endl;
        }
        else{
            break;
        }
    }
}

double factorial(int number) {
    if (number ==0 || number == 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}

double computeWays(int n, int k) {
    double value;
    value = ((factorial(k)*factorial(n-k))/factorial(n));
    return value;
}



/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/



/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *
* Note that the computation is done in a way that does not require *
* multiplying two factorials together. This is done to prevent any *
* intermediate result becoming so large that it causes overflow.   *
********************************************************************/


/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


