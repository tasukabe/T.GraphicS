#include<iostream>
using namespace std;

template < class Container = int >

class Graphics2D {
    protected:
        Container X_Axis[19], Y_Axis[19];
    public:
        void Listen();
        void Prosses();
        void Draw();
};

void Graphics2D<> :: Listen() {
    
}

void Graphics2D<> :: Prosses() {

}

void Graphics2D<> :: Draw() {

}
