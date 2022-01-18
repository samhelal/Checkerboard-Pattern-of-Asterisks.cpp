/*19. 4.29 (Checkerboard Pattern of Asterisks) Write a program
that displays the following checkerboard pattern. Your program
must use only three output statements, one of each of the
following forms: (c++ how to program)*/

#include<iostream>
using namespace std ;

int main(){

    int counter(1) ,a(1) ;

    cout << endl ;

    while(counter <= 8){

        
        if(counter%2==1){
            while(a<=8){
                cout << "* ";
                a++;
            }
            cout << endl << endl ; ;
            a=1;    
        }
        else{
            cout << ' ';
            while(a<=8){

                cout << "* ";
                a++;
            
            }
            cout << endl << endl;
            a=1;
        }
        counter++;
    }

}