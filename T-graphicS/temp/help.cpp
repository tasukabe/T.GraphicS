#include<iostream>
using namespace std;
/*class n {
public:
int X_Axis[20], Y_Axis[20];

void SetData(int Number_of_Dots) {
    for (int i = 0; i <= Number_of_Dots; i++) {
        cout<<"Enter dote "<<i<<"'s [x, y] = ";
        int X_Axis, Y_Axis;
        cin>>X_Axis>>Y_Axis;

        this->X_Axis[i] = X_Axis;
        this->Y_Axis[i] = Y_Axis;
    }
    for (int i = 0; i <= Number_of_Dots; i++) {
        cout<<i<<" is "<<this->X_Axis[i]<<" "<<this->Y_Axis[i]<<endl;
    }
}
};*/

int main(){
    /*try{
        int r;
        cin>>r;
        throw 101;
    }
    catch(int error) {
        cout<<"yes"<<error;
    }
    return 0;
    n N;
    N.SetData(5);*/

    /*char e[5];
    int i = 0;
    int I = 0;
    while(i < 5){
        cin>>e[i];
        i++;
    }
    while(I < 5){
        cout<<e[I];
        I++;
    }*/
    
    /*int dots;
    cout<<"______________________________\n";
    cout<<"How many dots you want?\n";
    cin>>dots;
    if (!dots){
        cout<<"[System : Entered value is not correct.]\n";
        system("pause");
    }*/
    
    for(int i = 1;;i++){
        cout<<char(i)<<" is "<<i<<endl;
        if(!char(i)){break;}
    }
    system("pause");
    return 0;
}



