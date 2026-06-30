void deshabilitarCliente(struct Cliente clientes[], int cantidad, int dni)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (clientes[i].dni == dni)
        {
            clientes[i].habilitado = 0;
            printf("Cliente con DNI %d deshabilitado.\n", dni);
            return;
        }
    }

    printf("Cliente con DNI %d no encontrado.\n", dni);
}
