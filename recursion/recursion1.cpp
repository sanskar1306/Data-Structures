/* 

Recursion is of five types:

1)Tail recursion - The statements are first executed and function is recalled at last
2)Head Recursion - the function is recalled first then the other statements are executed at returning time.
3)Tree Recursion - If the function recalls itself more than one time
4)Indirect Recursion - When more trhan one functions call each other in a circular fashion
5)Nested Recursion - Recursion inside recursion.The recursive callback parameter is again a func call , e.g=>(fun(fun n-2));

*/
//example of tail recursion
#include<iostream>
using namespace std;

void fun1(int n)
{
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
    }
}

int main(){

    int x=3;
    fun1(3);
    return 0;
}