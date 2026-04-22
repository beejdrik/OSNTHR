#include "mapBuilder.h"
#include "Graph.h"
#include <iostream>
#include <iomanip>


void mapBuilder::buildMap(Graph &g) {
    // =====================
    // ROW CONNECTIONS
    // =====================

    // Row 0
    g.addEdge(0, 1, 1);   g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 5);   g.addEdge(2, 1, 1);
    g.addEdge(2, 3, 1);   g.addEdge(3, 2, 5);
    g.addEdge(3, 4, 1);   g.addEdge(4, 3, 1);
    g.addEdge(4, 5, 1);   g.addEdge(5, 4, 1);
    g.addEdge(5, 6, 5);   g.addEdge(6, 5, 1);
    g.addEdge(6, 7, 3);   g.addEdge(7, 6, 5);
    g.addEdge(7, 8, 5);   g.addEdge(8, 7, 3);
    g.addEdge(8, 9, 5);   g.addEdge(9, 8, 5);

    // Row 1
    g.addEdge(10, 11, 1); g.addEdge(11, 10, 1);
    g.addEdge(11, 12, 1); g.addEdge(12, 11, 1);
    g.addEdge(12, 13, 5); g.addEdge(13, 12, 1);
    g.addEdge(13, 14, 5); g.addEdge(14, 13, 5);
    g.addEdge(14, 15, 1); g.addEdge(15, 14, 1);
    g.addEdge(15, 16, 10); g.addEdge(16, 15, 5);
    g.addEdge(16, 17, 8); g.addEdge(17, 16, 10);
    g.addEdge(17, 18, 15); g.addEdge(18, 17, 8);
    g.addEdge(18, 19, 3); g.addEdge(19, 18, 15);

    // Row 2
    g.addEdge(20, 21, 1); g.addEdge(21, 20, 1);
    g.addEdge(21, 22, 1); g.addEdge(22, 21, 1);
    g.addEdge(22, 23, 5); g.addEdge(23, 22, 1);
    g.addEdge(23, 24, 5); g.addEdge(24, 23, 5);
    g.addEdge(24, 25, 5); g.addEdge(25, 24, 5);
    g.addEdge(25, 26, 8); g.addEdge(26, 25, 5);
    g.addEdge(26, 27, 1); g.addEdge(27, 26, 8);
    g.addEdge(27, 28, 5); g.addEdge(28, 27, 5);
    g.addEdge(28, 29, 5); g.addEdge(29, 28, 5);

    // Row 3
    g.addEdge(30, 31, 0); g.addEdge(31, 30, 0);
    g.addEdge(31, 32, 1); g.addEdge(32, 31, 0);
    g.addEdge(32, 33, 5); g.addEdge(33, 32, 1);
    g.addEdge(33, 34, 5); g.addEdge(34, 33, 5);
    g.addEdge(34, 35, 3); g.addEdge(35, 34, 5);
    g.addEdge(35, 36, 5); g.addEdge(36, 35, 3);
    g.addEdge(36, 37, 5); g.addEdge(37, 36, 5);
    g.addEdge(37, 38, 3); g.addEdge(38, 37, 5);
    g.addEdge(38, 39, 1); g.addEdge(39, 38, 3);

    // Row 4
    g.addEdge(40, 41, 0); g.addEdge(41, 40, 1);
    g.addEdge(41, 42, 1); g.addEdge(42, 41, 0);
    g.addEdge(42, 43, 25); g.addEdge(43, 42, 1);
    g.addEdge(43, 44, 1); g.addEdge(44, 43, 25);
    g.addEdge(44, 45, 5); g.addEdge(45, 44, 1);
    g.addEdge(45, 46, 15); g.addEdge(46, 45, 5);
    g.addEdge(46, 47, 5); g.addEdge(47, 46, 15);
    g.addEdge(47, 48, 3); g.addEdge(48, 47, 5);
    g.addEdge(48, 49, 1); g.addEdge(49, 48, 3);

    // Row 5
    g.addEdge(50, 51, 0); g.addEdge(51, 50, 1);
    g.addEdge(51, 52, 20); g.addEdge(52, 51, 0);
    g.addEdge(52, 53, 20); g.addEdge(53, 52, 20);
    g.addEdge(53, 54, 3); g.addEdge(54, 53, 20);
    g.addEdge(54, 55, 3); g.addEdge(55, 54, 3);
    g.addEdge(55, 56, 5); g.addEdge(56, 55, 3);
    g.addEdge(56, 57, 3); g.addEdge(57, 56, 5);
    g.addEdge(57, 58, 1); g.addEdge(58, 57, 3);
    g.addEdge(58, 59, 1); g.addEdge(59, 58, 1);

    // Row 6
    g.addEdge(60, 61, 1); g.addEdge(61, 60, 1);
    g.addEdge(61, 62, 5); g.addEdge(62, 61, 1);
    g.addEdge(62, 63, 25); g.addEdge(63, 62, 5);
    g.addEdge(63, 64, 20); g.addEdge(64, 63, 25);
    g.addEdge(64, 65, 3); g.addEdge(65, 64, 20);
    g.addEdge(65, 66, 3); g.addEdge(66, 65, 3);
    g.addEdge(66, 67, 1); g.addEdge(67, 66, 1);
    g.addEdge(67, 68, 1); g.addEdge(68, 67, 1);
    g.addEdge(68, 69, 1); g.addEdge(69, 68, 1);

    // Row 7
    g.addEdge(70, 71, 1); g.addEdge(71, 70, 1);
    g.addEdge(71, 72, 1); g.addEdge(72, 71, 1);
    g.addEdge(72, 73, 25); g.addEdge(73, 72, 1);
    g.addEdge(73, 74, 1); g.addEdge(74, 73, 25);
    g.addEdge(74, 75, 0); g.addEdge(75, 74, 1);
    g.addEdge(75, 76, 3); g.addEdge(76, 75, 0);
    g.addEdge(76, 77, 3); g.addEdge(77, 76, 3);
    g.addEdge(77, 78, 1); g.addEdge(78, 77, 3);
    g.addEdge(78, 79, 1); g.addEdge(79, 78, 1);

    // Row 8
    g.addEdge(80, 81, 1); g.addEdge(81, 80, 1);
    g.addEdge(81, 82, 1); g.addEdge(82, 81, 1);
    g.addEdge(82, 83, 1); g.addEdge(83, 82, 1);
    g.addEdge(83, 84, 5); g.addEdge(84, 83, 1);
    g.addEdge(84, 85, 0); g.addEdge(85, 84, 5);
    g.addEdge(85, 86, 0); g.addEdge(86, 85, 0);
    g.addEdge(86, 87, 0); g.addEdge(87, 86, 0);
    g.addEdge(87, 88, 0); g.addEdge(88, 87, 0);
    g.addEdge(88, 89, 1); g.addEdge(89, 88, 0);

    // Row 9
    g.addEdge(90, 91, 5); g.addEdge(91, 90, 1);
    g.addEdge(91, 92, 1); g.addEdge(92, 91, 1);
    g.addEdge(92, 93, 1); g.addEdge(93, 92, 1);
    g.addEdge(93, 94, 5); g.addEdge(94, 93, 1);
    g.addEdge(94, 95, 5); g.addEdge(95, 94, 5);
    g.addEdge(95, 96, 5); g.addEdge(96, 95, 5);
    g.addEdge(96, 97, 10); g.addEdge(97, 96, 5);
    g.addEdge(97, 98, 5); g.addEdge(98, 97, 10);
    g.addEdge(98, 99, 0); g.addEdge(99, 98, 5);

    // Row 10
    g.addEdge(100, 101, 10); g.addEdge(101, 100, 5);
    g.addEdge(101, 102, 20); g.addEdge(102, 101, 10);
    g.addEdge(102, 103, 1); g.addEdge(103, 102, 20);
    g.addEdge(103, 104, 3); g.addEdge(104, 103, 1);
    g.addEdge(104, 105, 5); g.addEdge(105, 104, 3);
    g.addEdge(105, 106, 20); g.addEdge(106, 105, 5);
    g.addEdge(106, 107, 5); g.addEdge(107, 106, 20);
    g.addEdge(107, 108, 1); g.addEdge(108, 107, 5);
    g.addEdge(108, 109, 1); g.addEdge(109, 108, 1);

    // Row 11
    g.addEdge(110, 111, 5); g.addEdge(111, 110, 1);
    g.addEdge(111, 112, 1); g.addEdge(112, 111, 5);
    g.addEdge(112, 113, 3); g.addEdge(113, 112, 1);
    g.addEdge(113, 114, 3); g.addEdge(114, 113, 3);
    g.addEdge(114, 115, 5); g.addEdge(115, 114, 3);
    g.addEdge(115, 116, 20); g.addEdge(116, 115, 5);
    g.addEdge(116, 117, 1); g.addEdge(117, 116, 20);
    g.addEdge(117, 118, 1); g.addEdge(118, 117, 1);
    g.addEdge(118, 119, 1); g.addEdge(119, 118, 1);

    // Row 12
    g.addEdge(120, 121, 1); g.addEdge(121, 120, 1);
    g.addEdge(121, 122, 3); g.addEdge(122, 121, 1);
    g.addEdge(122, 123, 3); g.addEdge(123, 122, 3);
    g.addEdge(123, 124, 5); g.addEdge(124, 123, 3);
    g.addEdge(124, 125, 3); g.addEdge(125, 124, 5);
    g.addEdge(125, 126, 5); g.addEdge(126, 125, 3);
    g.addEdge(126, 127, 1); g.addEdge(127, 126, 5);
    g.addEdge(127, 128, 1); g.addEdge(128, 127, 1);
    g.addEdge(128, 129, 1); g.addEdge(129, 128, 1);

    // Row 13
    g.addEdge(130, 131, 1); g.addEdge(131, 130, 1);
    g.addEdge(131, 132, 3); g.addEdge(132, 131, 1);
    g.addEdge(132, 133, 3); g.addEdge(133, 132, 3);
    g.addEdge(133, 134, 5); g.addEdge(134, 133, 3);
    g.addEdge(134, 135, 3); g.addEdge(135, 134, 5);
    g.addEdge(135, 136, 5); g.addEdge(136, 135, 3);
    g.addEdge(136, 137, 5); g.addEdge(137, 136, 5);
    g.addEdge(137, 138, 1); g.addEdge(138, 137, 5);
    g.addEdge(138, 139, 1); g.addEdge(139, 138, 1);

    // Row 14
    g.addEdge(140, 141, 3); g.addEdge(141, 140, 1);
    g.addEdge(141, 142, 3); g.addEdge(142, 141, 3);
    g.addEdge(142, 143, 5); g.addEdge(143, 142, 3);
    g.addEdge(143, 144, 5); g.addEdge(144, 143, 5);
    g.addEdge(144, 145, 3); g.addEdge(145, 144, 5);
    g.addEdge(145, 146, 3); g.addEdge(146, 145, 3);
    g.addEdge(146, 147, 5); g.addEdge(147, 146, 3);
    g.addEdge(147, 148, 3); g.addEdge(148, 147, 5);
    g.addEdge(148, 149, 1); g.addEdge(149, 148, 3);

    // =====================
    // COLUMN CONNECTIONS
    // =====================

    // Column 0
g.addEdge(0, 10, 1);   g.addEdge(10, 0, 1);
g.addEdge(10, 20, 1);  g.addEdge(20, 10, 1);
g.addEdge(20, 30, 1);  g.addEdge(30, 20, 1);
g.addEdge(30, 40, 1);  g.addEdge(40, 30, 1);
g.addEdge(40, 50, 1);  g.addEdge(50, 40, 1);
g.addEdge(50, 60, 1);  g.addEdge(60, 50, 1);
g.addEdge(60, 70, 1);  g.addEdge(70, 60, 1);
g.addEdge(70, 80, 1);  g.addEdge(80, 70, 1);
g.addEdge(80, 90, 1);  g.addEdge(90, 80, 1);
g.addEdge(90, 100, 1); g.addEdge(100, 90, 1);
g.addEdge(100, 110, 1); g.addEdge(110, 100, 1);
g.addEdge(110, 120, 1); g.addEdge(120, 110, 1);
g.addEdge(120, 130, 1); g.addEdge(130, 120, 1);
g.addEdge(130, 140, 1); g.addEdge(140, 130, 1);

// Column 1
g.addEdge(1, 11, 1); g.addEdge(11, 1, 1);
g.addEdge(11, 21, 1); g.addEdge(21, 11, 1);
g.addEdge(21, 31, 1); g.addEdge(31, 21, 1);
g.addEdge(31, 41, 1); g.addEdge(41, 31, 1);
g.addEdge(41, 51, 1); g.addEdge(51, 41, 1);
g.addEdge(51, 61, 1); g.addEdge(61, 51, 1);
g.addEdge(61, 71, 1); g.addEdge(71, 61, 1);
g.addEdge(71, 81, 1); g.addEdge(81, 71, 1);
g.addEdge(81, 91, 1); g.addEdge(91, 81, 1);
g.addEdge(91, 101, 1); g.addEdge(101, 91, 1);
g.addEdge(101, 111, 1); g.addEdge(111, 101, 1);
g.addEdge(111, 121, 1); g.addEdge(121, 111, 1);
g.addEdge(121, 131, 1); g.addEdge(131, 121, 1);
g.addEdge(131, 141, 1); g.addEdge(141, 131, 1);

    // Column 2
g.addEdge(2, 12, 1);   g.addEdge(12, 2, 1);
g.addEdge(12, 22, 1);  g.addEdge(22, 12, 1);
g.addEdge(22, 32, 1);  g.addEdge(32, 22, 1);
g.addEdge(32, 42, 1);  g.addEdge(42, 32, 1);
g.addEdge(42, 52, 1);  g.addEdge(52, 42, 1);
g.addEdge(52, 62, 1);  g.addEdge(62, 52, 1);
g.addEdge(62, 72, 1);  g.addEdge(72, 62, 1);
g.addEdge(72, 82, 1);  g.addEdge(82, 72, 1);
g.addEdge(82, 92, 1);  g.addEdge(92, 82, 1);
g.addEdge(92, 102, 1); g.addEdge(102, 92, 1);
g.addEdge(102, 112, 1); g.addEdge(112, 102, 1);
g.addEdge(112, 122, 1); g.addEdge(122, 112, 1);
g.addEdge(122, 132, 1); g.addEdge(132, 122, 1);
g.addEdge(132, 142, 1); g.addEdge(142, 132, 1);

// Column 3
g.addEdge(3, 13, 1);   g.addEdge(13, 3, 1);
g.addEdge(13, 23, 1);  g.addEdge(23, 13, 1);
g.addEdge(23, 33, 1);  g.addEdge(33, 23, 1);
g.addEdge(33, 43, 1);  g.addEdge(43, 33, 1);
g.addEdge(43, 53, 1);  g.addEdge(53, 43, 1);
g.addEdge(53, 63, 1);  g.addEdge(63, 53, 1);
g.addEdge(63, 73, 1);  g.addEdge(73, 63, 1);
g.addEdge(73, 83, 1);  g.addEdge(83, 73, 1);
g.addEdge(83, 93, 1);  g.addEdge(93, 83, 1);
g.addEdge(93, 103, 1); g.addEdge(103, 93, 1);
g.addEdge(103, 113, 1); g.addEdge(113, 103, 1);
g.addEdge(113, 123, 1); g.addEdge(123, 113, 1);
g.addEdge(123, 133, 1); g.addEdge(133, 123, 1);
g.addEdge(133, 143, 1); g.addEdge(143, 133, 1);

// Column 4
g.addEdge(4, 14, 1);   g.addEdge(14, 4, 1);
g.addEdge(14, 24, 1);  g.addEdge(24, 14, 1);
g.addEdge(24, 34, 1);  g.addEdge(34, 24, 1);
g.addEdge(34, 44, 1);  g.addEdge(44, 34, 1);
g.addEdge(44, 54, 1);  g.addEdge(54, 44, 1);
g.addEdge(54, 64, 1);  g.addEdge(64, 54, 1);
g.addEdge(64, 74, 1);  g.addEdge(74, 64, 1);
g.addEdge(74, 84, 1);  g.addEdge(84, 74, 1);
g.addEdge(84, 94, 1);  g.addEdge(94, 84, 1);
g.addEdge(94, 104, 1); g.addEdge(104, 94, 1);
g.addEdge(104, 114, 1); g.addEdge(114, 104, 1);
g.addEdge(114, 124, 1); g.addEdge(124, 114, 1);
g.addEdge(124, 134, 1); g.addEdge(134, 124, 1);
g.addEdge(134, 144, 1); g.addEdge(144, 134, 1);

// Column 5
g.addEdge(5, 15, 1);   g.addEdge(15, 5, 1);
g.addEdge(15, 25, 1);  g.addEdge(25, 15, 1);
g.addEdge(25, 35, 1);  g.addEdge(35, 25, 1);
g.addEdge(35, 45, 1);  g.addEdge(45, 35, 1);
g.addEdge(45, 55, 1);  g.addEdge(55, 45, 1);
g.addEdge(55, 65, 1);  g.addEdge(65, 55, 1);
g.addEdge(65, 75, 1);  g.addEdge(75, 65, 1);
g.addEdge(75, 85, 1);  g.addEdge(85, 75, 1);
g.addEdge(85, 95, 1);  g.addEdge(95, 85, 1);
g.addEdge(95, 105, 1); g.addEdge(105, 95, 1);
g.addEdge(105, 115, 1); g.addEdge(115, 105, 1);
g.addEdge(115, 125, 1); g.addEdge(125, 115, 1);
g.addEdge(125, 135, 1); g.addEdge(135, 125, 1);
g.addEdge(135, 145, 1); g.addEdge(145, 135, 1);

// Column 6
g.addEdge(6, 16, 1);   g.addEdge(16, 6, 1);
g.addEdge(16, 26, 1);  g.addEdge(26, 16, 1);
g.addEdge(26, 36, 1);  g.addEdge(36, 26, 1);
g.addEdge(36, 46, 1);  g.addEdge(46, 36, 1);
g.addEdge(46, 56, 1);  g.addEdge(56, 46, 1);
g.addEdge(56, 66, 1);  g.addEdge(66, 56, 1);
g.addEdge(66, 76, 1);  g.addEdge(76, 66, 1);
g.addEdge(76, 86, 1);  g.addEdge(86, 76, 1);
g.addEdge(86, 96, 1);  g.addEdge(96, 86, 1);
g.addEdge(96, 106, 1); g.addEdge(106, 96, 1);
g.addEdge(106, 116, 1); g.addEdge(116, 106, 1);
g.addEdge(116, 126, 1); g.addEdge(126, 116, 1);
g.addEdge(126, 136, 1); g.addEdge(136, 126, 1);
g.addEdge(136, 146, 1); g.addEdge(146, 136, 1);

// Column 7
g.addEdge(7, 17, 1);   g.addEdge(17, 7, 1);
g.addEdge(17, 27, 1);  g.addEdge(27, 17, 1);
g.addEdge(27, 37, 1);  g.addEdge(37, 27, 1);
g.addEdge(37, 47, 1);  g.addEdge(47, 37, 1);
g.addEdge(47, 57, 1);  g.addEdge(57, 47, 1);
g.addEdge(57, 67, 1);  g.addEdge(67, 57, 1);
g.addEdge(67, 77, 1);  g.addEdge(77, 67, 1);
g.addEdge(77, 87, 1);  g.addEdge(87, 77, 1);
g.addEdge(87, 97, 1);  g.addEdge(97, 87, 1);
g.addEdge(97, 107, 1); g.addEdge(107, 97, 1);
g.addEdge(107, 117, 1); g.addEdge(117, 107, 1);
g.addEdge(117, 127, 1); g.addEdge(127, 117, 1);
g.addEdge(127, 137, 1); g.addEdge(137, 127, 1);
g.addEdge(137, 147, 1); g.addEdge(147, 137, 1);

// Column 8
g.addEdge(8, 18, 1);   g.addEdge(18, 8, 1);
g.addEdge(18, 28, 1);  g.addEdge(28, 18, 1);
g.addEdge(28, 38, 1);  g.addEdge(38, 28, 1);
g.addEdge(38, 48, 1);  g.addEdge(48, 38, 1);
g.addEdge(48, 58, 1);  g.addEdge(58, 48, 1);
g.addEdge(58, 68, 1);  g.addEdge(68, 58, 1);
g.addEdge(68, 78, 1);  g.addEdge(78, 68, 1);
g.addEdge(78, 88, 1);  g.addEdge(88, 78, 1);
g.addEdge(88, 98, 1);  g.addEdge(98, 88, 1);
g.addEdge(98, 108, 1); g.addEdge(108, 98, 1);
g.addEdge(108, 118, 1); g.addEdge(118, 108, 1);
g.addEdge(118, 128, 1); g.addEdge(128, 118, 1);
g.addEdge(128, 138, 1); g.addEdge(138, 128, 1);
g.addEdge(138, 148, 1); g.addEdge(148, 138, 1);

// Column 9
g.addEdge(9, 19, 1);   g.addEdge(19, 9, 1);
g.addEdge(19, 29, 1);  g.addEdge(29, 19, 1);
g.addEdge(29, 39, 1);  g.addEdge(39, 29, 1);
g.addEdge(39, 49, 1);  g.addEdge(49, 39, 1);
g.addEdge(49, 59, 1);  g.addEdge(59, 49, 1);
g.addEdge(59, 69, 1);  g.addEdge(69, 59, 1);
g.addEdge(69, 79, 1);  g.addEdge(79, 69, 1);
g.addEdge(79, 89, 1);  g.addEdge(89, 79, 1);
g.addEdge(89, 99, 1);  g.addEdge(99, 89, 1);
g.addEdge(99, 109, 1); g.addEdge(109, 99, 1);
g.addEdge(109, 119, 1); g.addEdge(119, 109, 1);
g.addEdge(119, 129, 1); g.addEdge(129, 119, 1);
g.addEdge(129, 139, 1); g.addEdge(139, 129, 1);
g.addEdge(139, 149, 1); g.addEdge(149, 139, 1);
}


void mapBuilder::printMap(int &treasureInput, int &finalDest) {
    std::cout << "\033[32m" << std::setw(3) <<   0 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   1 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<   2 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   3 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   4 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<   5 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) <<   6 << "\033[0m" << " -- ";
std::cout << "\033[1;32;47m" << std::setw(3) <<   7 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<   8 << "\033[0m" << " -- ";
std::cout << "\033[1;33;47m" << std::setw(3) <<   9 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) <<  10 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  11 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  12 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  13 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  14 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) <<  15 << "\033[0m" << " -- ";
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
std::cout << "\033[33;1m" << std::setw(3) <<  91 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  92 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) <<  93 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  94 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  95 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) <<  96 << "\033[0m" << " -- ";
std::cout << "\033[1;32;45m" << std::setw(3) <<  97 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) <<  98 << "\033[0m" << " -- ";
std::cout << "\033[37;1m" << std::setw(3) <<  99 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[33;1m" << std::setw(3) << 100 << "\033[0m" << " -- ";
std::cout << "\033[1;32;45m" << std::setw(3) << 101 << "\033[0m" << " -- ";
std::cout << "\033[1;32;41m" << std::setw(3) << 102 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 103 << "\033[0m" << " -- ";
std::cout << "\033[33;2m" << std::setw(3) << 104 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 105 << "\033[0m" << " -- ";
std::cout << "\033[1;32;41m" << std::setw(3) << 106 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) << 107 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 108 << "\033[0m" << " -- ";
std::cout << "\033[32m" << std::setw(3) << 109 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[32m" << std::setw(3) << 110 << "\033[0m" << " -- ";
std::cout << "\033[33;1m" << std::setw(3) << 111 << "\033[0m" << " -- ";
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