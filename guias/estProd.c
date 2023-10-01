#include <stdio.h>
#include <string.h>

int main() {
    struct Producto
    {
        int codigo;
        char descripcion[50];
        int precio;
    };

    struct Producto p2;
    struct Producto p1;

    p1.codigo = 1;
    strcpy(p1.descripcion, "descripcion del producto 1");
    p1.precio = 10000;

    p2.codigo = 2;
    strcpy(p2.descripcion, "descripcion del producto 2");
    p2.precio = 12000;

    printf("Producto 1\n");
    printf("Codigo: %d\n",p1.codigo);
    printf("Descripcion: %s\n",p1.descripcion);
    printf("Precio: $%d\n", p1.precio);

    printf("Producto 2\n");
    printf("Codigo: %d\n",p2.codigo);
    printf("Descripcion: %s\n",p2.descripcion);
    printf("Precio: $%d\n", p2.precio);

    if (p1.precio > p2.precio)
    {
        printf("El producto con mayor precio es el Producto 1\n");
    } else
    {
        printf("El producto con mayor precio es el Producto 2\n");
    }

    return 0;
}
