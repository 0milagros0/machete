void modificarCliente(struct Cliente clientes[], int cantidad, int dni)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (clientes[i].dni == dni)
        {
            printf("Cliente encontrado: %s %s\n", clientes[i].nombre, clientes[i].apellido);

            printf("Nuevo nombre: ");
            scanf("%s", clientes[i].nombre);

            printf("Nuevo apellido: ");
            scanf("%s", clientes[i].apellido);

            printf("Nuevo saldo: ");
            scanf("%f", &clientes[i].saldo);

            printf("Cliente modificado.\n");
            return;
        }
    }

    printf("Cliente con DNI %d no encontrado.\n", dni);
}
