#include <iostream>
#include <cmath>
#include <vector>

template<class T>
class vectores {
public:
    struct Vector3D {
        double x, y, z;
    };

    double dotProduct(Vector3D a, Vector3D b) {
        return a.x * b.x + a.y * b.y + a.z * b.z;
    }

    Vector3D crossProduct(Vector3D a, Vector3D b) {
        Vector3D c;
        c.x = a.y * b.z - a.z * b.y;
        c.y = a.z * b.x - a.x * b.z;
        c.z = a.x * b.y - a.y * b.x;
        return c;
    }
    Vector3D sumaVectores(Vector3D a, Vector3D b) {
        Vector3D d;
        d.x = a.x + b.x;
        d.y = a.y + b.y;
        d.z = a.z + b.z;
        return d;
    }
    double longitud(Vector3D a, Vector3D b) {
        return (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
    }
};

int main() {
    vectores<double> v;

    vectores<double>::Vector3D a, b;

    std::cout << "Ingrese las coordenadas del vector a: ";
    std::cin >> a.x >> a.y >> a.z;
    std::cout << "Ingrese las coordenadas del vector b: ";
    std::cin >> b.x >> b.y >> b.z;

    double dot = v.dotProduct(a, b);
    std::cout << "Producto punto: " << dot << std::endl;

    vectores<double>::Vector3D cross = v.crossProduct(a, b);
    std::cout << "Producto cruz: (" << cross.x << ", " << cross.y << ", " << cross.z << ")" << std::endl;

    vectores<double>::Vector3D suma = v.sumaVectores(a, b);
    std::cout << "Suma vectorial: (" << suma.x << ", " << suma.y << ", " << suma.z << ")" << std::endl;

    double longit = v.longitud(a, b);
    std::cout << "Longitud: " << longit << std::endl;

    return 0;
}
