//included...
#include <iostream>
#include <string.h>

#include "Functions/Graphics_2D.cpp"

using namespace std;
using namespace Graphics;

//Codes...

class Graphics_User {
    public:
        void Detail();
        void sd();
};
void Graphics_User :: Detail() {
    int dots;
    Graphics_2D *G2D = new Graphics_2D;
    cout<<"______________________________\n";
    cout<<"How many dots you want?\n";
    cin>>dots;
    if (!dots){
        cout<<"[System : Entered value is not correct.]\n";
        system("pause");
        Detail();
    }
    G2D->SetData(dots);
    cout<<"______________________________\n";
}

int main() {
    Graphics_User GU;
    string D2orD3;
    cout<<"______________________________\n";
    cout<<"!!!Welcome to T-Graphics!!!"<<endl;
    cout<<"______________________________\n";
    cout<<"2D or 3D ?\n>>>";
    cin>>D2orD3;
    
    if (D2orD3 == "2d" || D2orD3 == "2D") {
        Graphics_User *GU = new Graphics_User;
        GU->Detail();
        
        {/*cout<<"______________________________________________________\n";
        cout<<"\n Would you want to try in detail value or not ?\n>>";
        string Yn;
        cin>>Yn;
        if (Yn == "yes") {
            GU.Detail();
        }
        cout<<"______________________________\n";
        cout<<"triangle, squre, rectangle ?"<<endl;
        string which;
        cin>>which;*/}
    }
    else {
        cout<<"[System : Command isn't valid!]\n";
        cout<<"Do you want to retry Y/n ?"<<endl;
        char Yn;
        cin>>Yn;
        if(Yn == 'Y' || Yn == 'y') {
            main();
        }
        else {
            return 0;
        }
    }

    return 0;
}