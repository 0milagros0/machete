void eliminarProducto(struct Producto inventario[], int *n)
{
    int nroProductoEliminar;
    printf("Ingrese el numero de producto a eliminar: ");
    scanf("%d", &nroProductoEliminar);

    int i, j;
    int encontrado = 0;

    for (i = 0; i < *n; i++)
    {
        if (inventario[i].nroProducto == nroProductoEliminar)
        {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("\nNo se encontro un producto con ese numero.\n");
        return;
    }

    for (j = i; j < *n - 1; j++)
    {
        inventario[j] = inventario[j + 1];
    }

    (*n)--;

    printf("\nProducto eliminado correctamente.\n");
}
