#include "Container.h"

Container::Container(const std::string& type, double width, double height, double length, double weight)
    : type(type), width(width), height(height), length(length), weight(weight) {}

std::string Container::getType() const { return type; }
double Container::getWidth() const { return width; }
double Container::getHeight() const { return height; }
double Container::getLength() const { return length; }
double Container::getWeight() const { return weight; }


void Container::display() const {
    std::cout << "Container Type: " << type << std::endl
              << "Dimensions: " << width << " x " << height << " x " << length << std::endl 
              << "Weight: " << weight << std::endl;
}
