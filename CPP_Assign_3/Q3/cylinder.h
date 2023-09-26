class cylinder
{
    double radius;
    double height;

public:
    cylinder();
    cylinder(double radius, double height);

    double getRadius();
    double getHeight();
    void setRadius(int radius);
    void setHeight(int height);
    double getvolume();
    void printvolume();
};