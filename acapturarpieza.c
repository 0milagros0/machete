void capturarPieza(struct Pieza piezas[], int cantidad, int fila, int columna)
{
  for (int i = 0; i < cantidad; i++)
  {
    if (piezas[i].posicion[0] == fila && piezas[i].posicion[1] == columna)
    {
      piezas[i].activa = 0;
      printf("Pieza en posicion (%d,%d) capturada.\n", fila, columna);
      return;
    }
  }
  printf("Pieza en posicion (%d,%d) no encontrada.\n", fila, columna);
}
