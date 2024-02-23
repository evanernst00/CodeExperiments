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
    private:
        double height;
        double radius;
};

#endif //CYLINDER_H
