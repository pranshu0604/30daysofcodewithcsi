#include <iostream>
#include <string>

int main() {
    std::string name, feedback;
    
    std::cout << "Name: ";
    std::getline(std::cin, name);
    
    std::cout << "Feedback: ";
    std::getline(std::cin, feedback);
    
    std::cout << "\nDear " << name << ",\n"
              << "Thank you for sharing your feedback. We're delighted to hear about your positive experience and the valuable lessons you've gained during the 30 Days of Code challenge. Your dedication and enthusiasm have been inspiring. Farewell and best wishes for your future coding endeavors!\n";
    
    return 0;
}