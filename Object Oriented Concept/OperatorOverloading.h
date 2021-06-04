#include <iostream>

using namespace std;

class T1 {

    struct Vector2 {

        float x,y;

        Vector2(float x, float y) : x(x), y(y) {}
        ~Vector2() {
            cout << "Vector 2 Destructor is called" << endl;
        } 

        Vector2 operator +(const Vector2& other) const 
        {
            return Vector2(x + other.x, y + other.y);
        }

        Vector2 operator *(const Vector2& other) const
        {
            return Vector2(x * other.x, y * other.y);
        }

    };

    public:
        void structure() {
            Vector2 position(2.5f, 2.5f);
            Vector2 speed(5.6f, 5.6f);
            Vector2 power_up(1.1f, 1.1f);

            Vector2 result = position + speed * power_up;

            cout << "value of x is " << result.x << " and value of y is " << result.y << endl;
        }

        T1() {
            structure();
        }

        ~T1() {
            cout << "T1 Destructor is called" << endl;
        }

};