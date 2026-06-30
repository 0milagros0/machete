//Busca un producto según su número de producto.
//No busca recorriendo todo el arreglo, sino usando Búsqueda Binaria (Binary Search).
struct Producto buscarProducto(struct Producto inventario[], int n)
{
    int nroProductoBuscado;
    int inicio = 0;
    int fin = n - 1;

    printf("Ingrese el numero de producto a buscar: ");
    scanf("%d", &nroProductoBuscado);

    while (inicio <= fin)//Mientras todavía exista una parte del arreglo para revisar, continúa buscando
    {
        int medio = inicio + (fin - inicio) / 2;//calcula la psicion del medio

        if (inventario[medio].nroProducto == nroProductoBuscado)//compara
        {
            return inventario[medio];//si son iguales devuelve el producto
        }

        if (inventario[medio].nroProducto < nroProductoBuscado)
        {
            inicio = medio + 1;//si el num bucado es mayor,descarta toda la mitad izquierda
        }
        else
        {
            fin = medio - 1;//si es menor,descarta la mitad derecha
        }
    }

    struct Producto productoVacio = {0, "", 0.0};
    return productoVacio;//si no encuentra devuelve no encontrado
}
