#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
    public:
        double height;
        double radius;

        /**
         * @brief calculate volume
         * 
         * @return double - the volume of the cylinder
         */
        double volume();
};

#endif //CYLINDER_H
