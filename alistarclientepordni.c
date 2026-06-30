void listarClientesPorDNI(struct Cliente clientes[], int cantidad)
{
    ordenarClientes(clientes, cantidad);

    printf("Clientes ordenados por DNI:\n");

    for (int i = 0; i < cantidad; i++)
    {
        printf("DNI: %d, Nombre: %s %s, Saldo: %.2f\n",
               clientes[i].dni,
               clientes[i].nombre,
               clientes[i].apellido,
               clientes[i].saldo);
    }
}
