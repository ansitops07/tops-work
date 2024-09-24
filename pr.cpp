#include <iostream>
using namespace std;

class Parallelogram	{

    public:

    float base,height;

    float area_of_Parallelogram	(){
        return base * height;
    }
};

int main() {
    Parallelogram p1, p2;
    p1.base = 20;
    p1.height = 20;
    cout<<"p1 Parallelogram_area: "<<p1.area_of_Parallelogram	()<<endl;

    p2.base = 40;
    p2.height = 22;
    cout<<"p2 Parallelogram_area: "<<p2.area_of_Parallelogram	()<<endl;
    return 0;
}


