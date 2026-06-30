//En este caso no hace falta un puntero (*n),la cantidad de productos no cambia,modifican los datos de uno de ellos
void modificarProducto(struct Producto inventario[], int n)
{
    printf("Ingrese el numero de producto a modificar: ");
    int nroProductoModificar;
    scanf("%d", &nroProductoModificar);

    struct Producto productoEncontrado;//crea una variable
    productoEncontrado = buscarProducto(inventario, n);//llama la funcion buscar

    if (productoEncontrado.nroProducto == 0)
    {
        printf("\nNo se encontro el producto.\n");
        return;
    }

    printf("Ingrese el nuevo nombre del producto: ");
    scanf(" %19[^\n]", productoEncontrado.nombre);

    printf("Ingrese el nuevo precio del producto: ");
    scanf("%f", &productoEncontrado.precio);

    // Actualizar el producto en el inventario
    for (int i = 0; i < n; i++)
    {
        if (inventario[i].nroProducto == nroProductoModificar)
        {
            inventario[i] = productoEncontrado;
            break;
        }
    }

    printf("\nProducto modificado correctamente.\n");
}
