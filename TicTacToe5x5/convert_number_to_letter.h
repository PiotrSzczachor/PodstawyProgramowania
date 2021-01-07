int convert_number_to_number(int c)
{
    int kolumna;
    if (c == 1) {
        kolumna = 4;
    }
    if (c == 2) {
        kolumna = 3;
    }
    if (c == 3) {
        kolumna = 2;
    }
    if (c == 4) {
        kolumna = 1;
    }
    if (c == 5) {
        kolumna = 0;
    }
    return kolumna;
}
