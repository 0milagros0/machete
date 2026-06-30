//Recorre todo el inventario e imprime cada producto.
void listarProductos(struct Producto inventario[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t %d \t %s \t %.2f\n",
               i + 1,
               inventario[i].nroProducto,
               inventario[i].nombre,
               inventario[i].precio);
    }
}
