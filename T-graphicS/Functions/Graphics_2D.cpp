#include <iostream>
#include <string>

using namespace std;

namespace Graphics {

    class Graphics_2D {
            float X_Axis[20], Y_Axis[20];

            string COMMAND;
            int Number_of_Dots;
            char Targeted_char[20];
        public:
            //Constructors...
            ~Graphics_2D();

            //Functions...
            void Draw();
            void Setup();
            void SetData(int);
            void Connection();//Connection between dots..
    };
    
    void Graphics_2D :: SetData(int Number_of_Dots) {
        try {
            if (Number_of_Dots > 20) {throw 1001;}

            this->Number_of_Dots = Number_of_Dots;
                float *X_Axis = new float[20];
                float *Y_Axis = new float[20];

            for (int i = 1; i <= Number_of_Dots; i++) {

                cout<<"Enter dote axiss and \ntargeted character"<<i<<"'s [x, y, {char}] = ";
                cin>>X_Axis[i]>>Y_Axis[i]>>Targeted_char[i];
                
                if (!X_Axis[i] || !Y_Axis[i] || !Targeted_char[i]) { throw 1002; }

                for (int I = 1; I <= Number_of_Dots; I++) {
                    if (Y_Axis[i] > this->Y_Axis[I])
                        { this->Y_Axis[I] = Y_Axis[i]; this->X_Axis[I] = X_Axis[i];}
                }
            }
            delete[] X_Axis;
            delete[] Y_Axis;
            
            Connection();
        }

        catch(int ErrorCode) {
            cout<<"______________________________\n";
            cout<<"[System : Error code "<<ErrorCode<<"]\n";
            cout<<"______________________________\n";
            system("pause");
        }
    }

    void Graphics_2D :: Connection() {
        cout<<"Enter relations between dots\n";
        cin>>COMMAND;
    }

    void Graphics_2D :: Draw() {
        bool XY_t ;

        for (int i = 0; ; i++) {
            if (i == 0) {
                cout<<"        Y|"<<endl; XY_t = true; continue;
            }
            if (XY_t) {
                cout<<"         |";
            }
            if (!XY_t) {
                cout<<"    -----+";
                for (float i = 3.34; i < X_Axis[1]; i++)
                { cout<<"-";}
                continue;
            }
            if(XY_t);
        }
    }
}
