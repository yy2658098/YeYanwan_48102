/* 
 * File:   main
 * Author: yeyanwan
 *
 * Created on September 18, 2016, 9:45 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float sales, generate;
    const float percent= 0.58;
   
    sales = 8.6f;
    generate = sales * percent;
    
    cout << "The East Coast division will generate " << generate << " million" << endl;
    
    
    return 0;
}

