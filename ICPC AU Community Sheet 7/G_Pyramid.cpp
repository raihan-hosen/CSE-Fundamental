#include <iostream>

using namespace std;

void print_spaces(int count)
{
    if (count == 0)
        return;
    cout << " ";
    print_spaces(count - 1);
}

void print_stars(int count)
{
    if (count == 0)
        return;
    cout << "*";
    print_stars(count - 1);
}

void draw_pyramid(int current_row, int total_rows)
{
    if (current_row > total_rows)
        return;

    print_spaces(total_rows - current_row);
    print_stars((2 * current_row) - 1);
    cout << "\n";

    draw_pyramid(current_row + 1, total_rows);
}

int main()
{
    int n;
    cin >> n;

    draw_pyramid(1, n);

    return 0;
}
