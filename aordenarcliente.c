void ordenarClientes(struct Cliente clientes[], int cantidad)
{
    struct Cliente aux;

    for (int i = 0; i < cantidad - 1; i++)
    {
        for (int j = 0; j < cantidad - i - 1; j++)
        {
            if (clientes[j].dni > clientes[j + 1].dni)
            {
                aux = clientes[j];
                clientes[j] = clientes[j + 1];
                clientes[j + 1] = aux;
            }
        }
    }
}
