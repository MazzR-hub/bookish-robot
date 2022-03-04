#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " NUM_INTS FILENAME" << std::endl;
        return -1;
    }

    std::ofstream myfile;
    myfile.open(argv[2]);
    int MAX_INT = atoi(argv[1]);
    myfile << std::to_string(MAX_INT) << std::endl;
    for (int i = 0; i < MAX_INT; i++)
    {
        myfile << std::to_string(rand() % MAX_INT) << " ";
    }
    myfile << "\n";
    myfile.close();
}
