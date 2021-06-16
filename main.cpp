#include <iostream>

int GetRabbitWays(int stair_num, int jump_max_length = 3)
{
    if (stair_num < 0) return 0;
    if (stair_num == 0) return 1; // He will just stay still
    if (stair_num == 1) return 1;

    int res = 0;
    for (int i = 1; i <= jump_max_length; i++)
    {
        res += GetRabbitWays(stair_num - i, jump_max_length);
    }
    return  res;
}

int main() {
    int stair_number = 5;
    int rabbit_jump_max_length = 20;
    std::cout << "Rabbit is trying to reach the stair number " << stair_number << ".\n";
    std::cout << "His maximal jump is " << rabbit_jump_max_length << ".\n";
    std::cout << "He can do it in " << GetRabbitWays(stair_number, rabbit_jump_max_length) << " different ways.\n";

    return 0;
}
