#ifndef BOX_HPP
#define BOX_HPP

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Getter methods
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // Setter methods
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    // Calculate volume
    double calculateVolume() const {
        return length * width * height;
    }

    // Calculate surface area
    double calculateSurfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }
};

#endif // BOX_HPP
