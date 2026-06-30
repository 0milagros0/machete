struct Pieza buscarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
    ordenarPiezas(piezas, cantidad);//ordena porque se usa busqueda binaria

    int inicio = 0;
    int fin = cantidad - 1;

    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio) / 2;
        int filaMedio = piezas[medio].posicion[0];
        int columnaMedio = piezas[medio].posicion[1];

        if (filaMedio == fila && columnaMedio == columna)
        {
            return piezas[medio];
        }
        else if (filaMedio < fila || (filaMedio == fila && columnaMedio < columna))
        {
            inicio = medio + 1;
        }
        else
        {
            fin = medio - 1;
        }
    }

    struct Pieza piezaNoEncontrada = {{-1, -1}, "", 'x', 0, 0};
    return piezaNoEncontrada;
}
