/* 
 * File:   main
 * Author: Dr.Mark E. Lehr
 * Created on September 13th, 2016, 11:55 AM
 * Purpose: To calculate when homeowners in Riverside will have 
 *          beach front property
 */

#include <iostream>
using namespace std;

//Global Constants
const float CNVMMFT=304.8f;
const float CNVMMM=1000.0f;

int main(int argc, char** argv) {
//Declaration of Variables
    float rate=1.5;
    int nYear1=5,nYear2=7,nYear3=10;
    float rise1,rise2,rise3;//Solutions for 3 years from above
    int nYrBch;//Name of years before your home is beach front property
    float elevRiv=860;//Elevation of Riverside in feet according to wilipedia
    
    //Process values ->Map inputs to output
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    //Display Output
    cout<<"The rate of seal level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<"years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<"years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<"years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;
    
    //Exit Program
    return 0;
}

