#include <iostream>
using namespace std;
string palindrome(string palabra,int tam ){
    for(int i=0;i<tam;i++){
        if(palabra[i]!=palabra[tam-1]){
            return "False";
        }
        tam--;
    }
    return "True";
}


int main()
{
    string palabra="abba";
    cout<<palabra<<" es palindrome "<<palindrome(palabra,4);
    return 0;
}

