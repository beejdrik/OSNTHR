#include "mapBuilder.h"
#include "Graph.h"
#include <iostream>
#include <iomanip>


void mapBuilder::buildMap(Graph &g) {

    // Row 0
    g.addEdge(0, 1, 1);   g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 1);   g.addEdge(2, 1, 1);
    g.addEdge(2, 3, 1);   g.addEdge(3, 2, 1);

    // Row 1
    g.addEdge(4, 5, 1);   g.addEdge(5, 4, 1);
    g.addEdge(5, 6, 1);   g.addEdge(6, 5, 1);
    g.addEdge(6, 7, 1);   g.addEdge(7, 6, 1);

    // Row 2
    g.addEdge(8, 9, 1);   g.addEdge(9, 8, 1);
    g.addEdge(9, 10, 1);  g.addEdge(10, 9, 1);
    g.addEdge(10, 11, 1); g.addEdge(11, 10, 1);

    // Row 3
    g.addEdge(12, 13, 1); g.addEdge(13, 12, 1);
    g.addEdge(13, 14, 1); g.addEdge(14, 13, 1);
    g.addEdge(14, 15, 1); g.addEdge(15, 14, 1);

    // Col 0 (vertical)
    g.addEdge(0, 4, 1);   g.addEdge(4, 0, 1);
    g.addEdge(4, 8, 1);   g.addEdge(8, 4, 1);
    g.addEdge(8, 12, 1);  g.addEdge(12, 8, 1);

    // Col 1
    g.addEdge(1, 5, 1);   g.addEdge(5, 1, 1);
    g.addEdge(5, 9, 1);   g.addEdge(9, 5, 1);
    g.addEdge(9, 13, 1);  g.addEdge(13, 9, 1);

    // Col 2
    g.addEdge(2, 6, 1);   g.addEdge(6, 2, 1);
    g.addEdge(6, 10, 1);  g.addEdge(10, 6, 1);
    g.addEdge(10, 14, 1); g.addEdge(14, 10, 1);

    // Col 3
    g.addEdge(3, 7, 1);   g.addEdge(7, 3, 1);
    g.addEdge(7, 11, 1);  g.addEdge(11, 7, 1);
    g.addEdge(11, 15, 1); g.addEdge(15, 11, 1);
}


void mapBuilder::printMap(int &treasureInput, int &finalDest) {
    std::cout << "\033[32m" << std::setw(3) <<   0 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   1 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<   2 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   3 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   4 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   5 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   6 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<   7 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<   8 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<   9 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  10 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  11 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  12 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  13 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  14 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  15 << "\033[0m" << " -- ";
std::cout << "\033[1;32;45m" << std::setw(3) <<  16 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  17 << "\033[0m" << " -- ";
std::cout << "\033[1;31;47m" << std::setw(3) <<  18 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  19 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  20 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  21 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  22 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  23 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  24 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  25 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  26 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  27 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  28 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  29 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37;1m" << std::setw(3) <<  30 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  31 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  32 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  33 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  34 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  35 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  36 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  37 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  38 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  39 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  40 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  41 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  42 << "\033[0m" << " -- ";
std::cout << "\033[1;34;41m" << std::setw(3) <<  43 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  44 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  45 << "\033[0m" << " -- ";
std::cout << "\033[1;31;47m" << std::setw(3) <<  46 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  47 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  48 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  49 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  50 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  51 << "\033[0m" << " -- ";
std::cout << "\033[1;37;41m" << std::setw(3) <<  52 << "\033[0m" << " -- ";
std::cout << "\033[1;37;41m" << std::setw(3) <<  53 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  54 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  55 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<  56 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  57 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  58 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  59 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  60 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  61 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  62 << "\033[0m" << " -- ";
std::cout << "\033[1;34;41m" << std::setw(3) <<  63 << "\033[0m" << " -- ";
std::cout << "\033[1;37;41m" << std::setw(3) <<  64 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  65 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  66 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  67 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  68 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  69 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  70 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  71 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  72 << "\033[0m" << " -- ";
std::cout << "\033[1;34;41m" << std::setw(3) <<  73 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  74 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  75 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  76 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<  77 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  78 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  79 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  80 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  81 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  82 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  83 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  84 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  85 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  86 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  87 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  88 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  89 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  90 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  91 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  92 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  93 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  94 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  95 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  96 << "\033[0m" << " -- ";
std::cout << "\033[1;32;45m" << std::setw(3) <<  97 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  98 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  99 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 100 << "\033[0m" << " -- ";
std::cout << "\033[1;32;45m" << std::setw(3) << 101 << "\033[0m" << " -- ";
std::cout << "\033[1;32;41m" << std::setw(3) << 102 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 103 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 104 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 105 << "\033[0m" << " -- ";
std::cout << "\033[1;32;41m" << std::setw(3) << 106 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 107 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 108 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 109 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 110 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 111 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 112 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 113 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 114 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 115 << "\033[0m" << " -- ";
std::cout << "\033[1;32;41m" << std::setw(3) << 116 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 117 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 118 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 119 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 120 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 121 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 122 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 123 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 124 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 125 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 126 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 127 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 128 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 129 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 130 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 131 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 132 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 133 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 134 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 135 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 136 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 137 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 138 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 139 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 140 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 141 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 142 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 143 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 144 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 145 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 146 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 147 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 148 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 149 << "\033[0m" << " -- ";
std::cout << "\n";

    std::cout << "Gazing across the battlefield, you activate the top secret "
    "Omni-surface Navigable Treasure Hunting Robot from point 0 on the map..."
    "Where is the treasure hidden (only natural numbers): \n";
    std::cin >> treasureInput;

    while (treasureInput <= 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 1";
        std::cout << "\n Try again: ";
        std::cin >> treasureInput;
    }
    std::cout << std::endl;

    std::cout << "Giving your trusty robot one last pat on the head and a 'Godspeed little guy'... "
    "Where do you set the rendezvous point? \n";
    std::cin >> finalDest;
    while (finalDest < 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 0";
        std::cout << "\n Try again: ";
        std::cin >> finalDest;
    }
    std::cout << std::endl;
    }


