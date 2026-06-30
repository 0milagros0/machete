void habilitarCliente(struct Cliente clientes[], int cantidad, int dni)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (clientes[i].dni == dni)
        {
            clientes[i].habilitado = 1;
            printf("Cliente con DNI %d habilitado.\n", dni);
            return;
        }
    }

    printf("Cliente con DNI %d no encontrado.\n", dni);
}
