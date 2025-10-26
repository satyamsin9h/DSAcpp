#include<iostream>
#include<math.h>
using namespace std;

void tohcal(int n, int source, int help, int dest) {
        
    if(n == 1){
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
        return;
    }
    
    tohcal(n-1, source, dest, help);
    
    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
    
    tohcal(n-1, help, source, dest);
}

int main() {

    int n;
    cin>>n;

    int source = 1, help = 2, dest = 3;

    tohcal(n, source, help, dest);
        
    cout<<pow(2,n) - 1<<endl;

    return 0;
}