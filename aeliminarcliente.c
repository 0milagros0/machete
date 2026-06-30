void eliminarCliente(struct Cliente clientes[], int *cantidad, int dni)
{
    int i, j;
    int encontrado = 0;

    for (i = 0; i < *cantidad; i++)
    {
        if (clientes[i].dni == dni)
        {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
    {
        for (j = i; j < *cantidad - 1; j++)
        {
            clientes[j] = clientes[j + 1];
        }

        (*cantidad)--;

        printf("Cliente con DNI %d eliminado.\n", dni);
    }
    else
    {
        printf("Cliente con DNI %d no encontrado.\n", dni);
    }
}
