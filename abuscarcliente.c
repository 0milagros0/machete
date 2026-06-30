struct Cliente buscarCliente(struct Cliente clientes[], int cantidad, int dni)
{
    ordenarClientes(clientes, cantidad);

    int inicio = 0;
    int fin = cantidad - 1;

    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio) / 2;

        if (clientes[medio].dni == dni)
        {
            return clientes[medio];
        }
        else if (clientes[medio].dni < dni)
        {
            inicio = medio + 1;
        }
        else
        {
            fin = medio - 1;
        }
    }

    struct Cliente clienteNoEncontrado = {-1, "", "", 0.0, 0};
    return clienteNoEncontrado;
}
