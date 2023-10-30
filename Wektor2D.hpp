class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D() : x(0), y(0) {}//konstruktor domyslny przypisujacy [0,0]
    Wektor2D(double mx, double my) : x(mx), y(my) {}// konstruktor przypisujacy wartosci

    //setters and getters
    void setX(double mx) {x=mx;}
    void setY(double my) {y=my;}

    double getX() {return x; }
    double getY() {return y; }

    Wektor2D operator+(Wektor2D v2){

        return Wektor2D(x+v2.getX(), y+v2.getY());

    }

    double operator*(Wektor2D v2){

        return x*v2.getX()+y*v2.getY();

    }

};
