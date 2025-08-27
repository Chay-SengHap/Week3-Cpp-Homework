#include <iostream>


using namespace std;


int main(){
    int array[10] ={9,2,4,1,7,5,8,3,6,0};
    cout<<"Before Sort"<<endl;
    for(int i = 0 ; i < 10 ; i++){
        if(i==9){
           cout<< array[i]; 
        }else{
        cout<< array[i] << " , ";}

    }
    cout<<"\nAfter Sort"<<endl;
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        if(i==9){
           cout<< array[i]; 
        }else{
        cout<< array[i] << " , ";}

    }






    return 0;
}