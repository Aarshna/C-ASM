
#include <iostream>
using namespace std;

int main(){
    long long sum = 0;
    int num;
for(int i=0; i<8; ++i) {
    cout<<"enter number"<<i+1<<":";
    cin>>num;
    sum=sum+num;
}
cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << sum / 8.0 << endl;

}