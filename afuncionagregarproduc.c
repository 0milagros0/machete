void agreagarProducto(struct Producto inventario[], int *n)
{
    if (*n >= MAX_PRODUCTOS)//Pregunta si el arreglo ya está lleno.
    {
        printf("\nNo se pueden agregar mas productos. Inventario lleno.\n");
        return;
    }

    struct Producto nuevoProducto;//Se crea una variable temporal donde se guardarán los datos ingresados por el usuario.

    printf("Ingrese el numero de producto: ");
    scanf("%d", &nuevoProducto.nroProducto);

    printf("Ingrese el nombre del producto: ");
    scanf(" %19[^\n]", nuevoProducto.nombre);//Esta forma de scanf permite leer espacios.

    printf("Ingrese el precio del producto: ");
    scanf("%f", &nuevoProducto.precio);

    inventario[*n] = nuevoProducto;//Lo guarda en la primera posición libre.
    (*n)++;//aumenta el epacio

    int i, j;
    struct Producto temp;
//burbuja,ordena de nuevo porque el nuevo producto puede desordenar y no serviria la busqueda binaria
    for (i = 0; i < *n - 1; i++)
    {
        for (j = 0; j < *n - 1 - i; j++)
        {
            if (inventario[j].nroProducto > inventario[j + 1].nroProducto)
            {
                temp = inventario[j];
                inventario[j] = inventario[j + 1];
                inventario[j + 1] = temp;
            }
        }
    }

    printf("\nProducto agregado y ordenado correctamente.\n");
}
