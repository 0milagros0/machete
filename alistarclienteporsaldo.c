void listarClientesPorSaldo(struct Cliente clientes[], int cantidad)
{
    struct Cliente aux;

    for (int i = 0; i < cantidad - 1; i++)
    {
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (clientes[j].saldo < clientes[j + 1].saldo)
            {
                aux = clientes[j];
                clientes[j] = clientes[j + 1];
                clientes[j + 1] = aux;
            }
        }
    }

    printf("Clientes ordenados por saldo (de mayor a menor):\n");

    for (int i = 0; i < cantidad; i++)
    {
        printf("DNI: %d, Nombre: %s %s, Saldo: %.2f\n",
               clientes[i].dni,
               clientes[i].nombre,
               clientes[i].apellido,
               clientes[i].saldo);
    }
}
