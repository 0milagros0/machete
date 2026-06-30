void listarClientesHabilitados(struct Cliente clientes[], int cantidad)
{
    printf("Clientes habilitados:\n");
    int encontrados = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (clientes[i].habilitado == 1)
        {
            printf("DNI: %d, Nombre: %s %s, Saldo: %.2f\n",
                   clientes[i].dni,
                   clientes[i].nombre,
                   clientes[i].apellido,
                   clientes[i].saldo);

            encontrados++;
        }
    }

    if (encontrados == 0)
    {
        printf("No hay clientes habilitados.\n");
    }
}
