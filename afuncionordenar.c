void ordenarPiezas(struct Pieza piezas[], int cantidad)
{
    struct Pieza aux;//Se crea una variable auxiliar para poder intercambiar dos estructuras

    for (int i = 0; i < cantidad - 1; i++)//Controla la cantidad de pasadas que hará Bubble Sort.
    {
        for (int j = 0; j < cantidad - i - 1; j++)//Recorre el arreglo comparando dos piezas consecutivas
        {
            if (piezas[j].posicion[0] > piezas[j + 1].posicion[0] ||
                (piezas[j].posicion[0] == piezas[j + 1].posicion[0] &&
                 piezas[j].posicion[1] > piezas[j + 1].posicion[1]))
              //Condicion:Si la fila es mayor o si las filas son iguales y la columna es mayor, entonces intercambiar.
            {
                aux = piezas[j];
                piezas[j] = piezas[j + 1];
                piezas[j + 1] = aux;//intercambio,Se utiliza una variable auxiliar,si no se perdería la información.
            }
        }
    }
}
