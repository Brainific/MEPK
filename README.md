# Multi-agent Epistemic Planner Kit
Code of IJCAI2017: "[A General Multi-agent Epistemic Planner Based on Higher-order Belief Change](https://www.ijcai.org/proceedings/2017/0152.pdf)".


## Experimental Results

Experimental results on six domains.

|    Problem    | A | \|S\|  + \|D\| | \|P\| | d  |         MEPK         |
| :-----------: | :--------: | :-------------------------: | :-----------: | :--: | :------------------: |
|    CC(2,4)    |     2      |           0 + 18            |      18       |  1   |  0.14 - 0.13 (3/4)   |
|    CC(3,4)    |     2      |           0 + 18            |      20       |  1   |  1.83 - 1.81 (3/4)   |
|    CC(4,4)    |     2      |           0 + 18            |      24       |  1   | 76.63 - 76.56 (3/4)  |
|   *CC(2,3)    |     2      |           8 + 16            |      12       |  1   |  3.74 - 3.73 (4/12)  |
|   *CC(2,3)    |     3      |           12 + 42           |      15       |  1   | 12.54 - 12.53 (5/16) |
|   *CC(2,4)    |     2      |           12 + 20           |      16       |  1   |  9.40 - 9.39 (6/18)  |
|     SC(4)     |     3      |            1 + 3            |       7       |  1   |  0.03 - 0.02 (5/10)  |
|     SC(4)     |     7      |            1 + 3            |      11       |  1   | 13.88 - 0.05 (5/10)  |
|     SC(4)     |     3      |            1 + 3            |       7       |  3   |  0.04 - 0.03 (5/10)  |
|     SC(4)     |     3      |            1 + 3            |       7       |  4   |  0.07 - 0.05 (5/10)  |
|     SC(8)     |     3      |            1 + 3            |      11       |  1   | 0.22 - 0.16 (10/19)  |
| Grapevine(2)  |     3      |           0 + 18            |       9       |  2   |  0.02 - 0.01 (2/3)   |
| Grapevine(2)  |     4      |           0 + 56            |      12       |  1   |  0.09 - 0.06 (2/3)   |
| Grapevine(2)  |     4      |           0 + 56            |      12       |  2   |  0.14 - 0.10 (2/3)   |
| Grapevine(2)  |     4      |           0 + 56            |      12       |  3   |  0.19 - 0.14 (2/3)   |
| Grapevine(2)  |     4      |           0 + 56            |      12       |  4   |  0.34 - 0.24 (2/3)   |
| Grapevine(3)  |     4      |           0 + 152           |      16       |  1   |  1.29 - 0.92 (2/3)   |
|   Hexa Game   |     3      |           18 + 0            |       9       |  1   |  0.01 - 0.01 (1/3)   |
|   Hexa Game   |     4      |           48 + 0            |      16       |  1   |  0.02 - 0.02 (3/11)  |
|   Hexa Game   |     5      |           100 + 0           |      25       |  1   | 28.25 - 25.19 (6/47) |
| Assemble Line |     2      |            4 + 2            |       4       |  2   |  0.01 - 0.01 (5/12)  |
| Assemble Line |     2      |            4 + 2            |       4       |  3   |  0.02 - 0.02 (5/12)  |
| Assemble Line |     2      |            4 + 2            |       4       |  4   |  0.03 - 0.03 (5/12)  |
| Assemble Line |     2      |            4 + 2            |       4       |  5   |  0.04 - 0.04 (5/12)  |
| Assemble Line |     2      |            4 + 2            |       4       |  7   |  0.14 - 0.13 (5/12)  |
|    Gossip     |     3      |            0 + 6            |       3       |  2   |  0.03 - 0.02 (3/4)   |
|    Gossip     |     4      |           0 + 24            |       4       |  2   |  4.01 - 3.44 (4/5)   |
|    Gossip     |     5      |           0 + 120           |       5       |  2   |  14.02 - 9.50 (4/5)  |



Comparision results.



|   Problems   | \|A\| | d  |        MEPK         |        K&G         |   Muise et al.    |
| :----------: | :-------------: | :--: | :-----------------: | :----------------: | :-------------: |
|   CC(2,4)    |        2        | 1  |  0.14 - 0.13 (3/4)  |  0.05 - 0.01 (8)   |       na        |
|   CC(3,4)    |        2        | 1  |  1.83 - 1.81 (3/4)  |  27.87 - 0.04 (8)  |       na        |
|   CC(4,4)    |        2        | 1  | 76.63 - 76.56 (3/4) | 2115.98 - 2.09 (8) |       na        |
|    SC(4)     |        3        | 1  | 0.03 - 0.02 (5/10)  |  0.01 - 0.01 (9)   | 0.08 - 0.01 (5) |
|    SC(4)     |        7        | 1  | 13.88 - 0.05 (5/10) |         na         | 0.20 - 0.01 (5) |
|    SC(4)     |        3        | 3  | 0.04 - 0.03 (5/10)  |         na         | 0.37 - 0.01 (5) |
| Grapevine(2) |        3        | 2  |  0.02 - 0.01 (2/3)  |         na         | 0.50 - 0.01 (5) |
| Grapevine(2) |        4        | 1  |  0.09 - 0.06 (2/3)  |         na         | 0.34 - 0.01 (9) |
| Grapevine(2) |        4        | 2  |  0.14 - 0.10 (2/3)  |         na         | 1.82 - 0.29 (5) |

## Dependencies

[flex/bison](https://www.gnu.org/software/bison/) - for parsing epddl

[boost](http://www.boost.org/) - dynamic_bitset for storing literal

[expect](http://manpages.ubuntu.com/manpages/trusty/man1/expect.1.html) - for timeout of a test

## Compile and Run

change to the directory `MEPK/src`

```
$ make
$ ./run.sh
```

