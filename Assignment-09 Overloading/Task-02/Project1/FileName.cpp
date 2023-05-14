#include <iOStream>
using namespace std;


void fibonacci(int n ,int i, int a, int b,int nextTerm) {
    if (i == 0) {
        cout << 0 << " , ";
    }
    
     if (i <= n) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        cout << nextTerm<<" , ";
        fibonacci(n,i=i+1,a,b,nextTerm);
    }

}
int main() {
    int i = 0;
    int a = 0;
    int b = 1;
    int nextTerm = 0;
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    fibonacci(n, i,a,b,nextTerm);

    

    
    return 0;
}