int convert_letter_to_number(char a)

{
    int c;
    if (a == 'A' || a == 'a') {
        c = 0;
    }
    if (a == 'B' || a == 'b') {
        c = 1;
    }
    if (a == 'C' || a == 'c') {
        c = 2;
    }
    if (a == 'D' || a == 'd') {
        c = 3;
    }
    if (a == 'E' || a == 'e') {
        c = 4;
    }

    return c;
}