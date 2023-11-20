#include <unistd.h>

void ft_print_comb(void) {
    char comma = ',';
    char space = ' ';

    int i = 0;
    while (i < 8) {
        int j = i + 1;
        while (j < 9) {
            int k = j + 1;
            while (k < 10) {
                char i_char = i + '0';
                char j_char = j + '0';
                char k_char = k + '0';

                write(1, &i_char, 1);
                write(1, &j_char, 1);
                write(1, &k_char, 1);

                if (i != 7 || j != 8 || k != 9) {
                    write(1, &comma, 1);
                    write(1, &space, 1);
                }

                k++;
            }
            j++;
        }
        i++;
    }
}

int main() {
    ft_print_comb();
    return 0;
}