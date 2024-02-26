#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
    public:
        Cylinder();
        Cylinder(const double h, const double r);

        /**
         * @brief calculate volume
         * 
         * @return double - the volume of the cylinder
         */
        double volume();

        double getHeight();
        double getRadius();

        double setHeight(double h);
        double setRadius(double r);

    private:
        double _height;
        double _radius;
};

#endif //CYLINDER_H
