#pragma once

// ---------------------------------------------------
// Clase Triangulo
// Permite almacenar las dimensiones de un triángulo
// y calcular su área a partir de la base y la altura.
// ---------------------------------------------------

class Triangulo
{
private:
    // Atributos principales
    float longitudBase;
    float longitudAltura;
    float areaCalculada;

public:
    // Constructor por defecto
    Triangulo(void);

    // Destructor de la clase
    ~Triangulo(void);

    // Calcula y retorna el área del triángulo
    float calcularAreaTriangulo(float baseTriangulo, float alturaTriangulo);
};
