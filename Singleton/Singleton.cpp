#include <iostream>

using namespace std;

class Random {

    private:
        Random() {}
        float random_number = 0.5f;
        float FloatIm() {
            return random_number;
        }

    public:
        Random(const Random&) = delete;
        static Random& Get() {
            static Random s_Instance;
            return s_Instance;
        }
        static float Float() {
            return Get().FloatIm();
        }

};

namespace RandomClass {

    float random_number = 0.5f;
    float Float() {
        return random_number;
    }

}

int main() {

    cout << "Random Number = " << RandomClass::Float() << endl;

    return 0;

}