#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i[9];
    for (i[0] = 1; i[0] <= 9; i[0]++)
    {
        for (i[1] = 1; i[1] <= 9; i[1]++)
        {
            int p1=0;
            if (i[1] == i[0]) p1 = 1;
            if (p1 != 1) {
                for (i[2] = 1; i[2] <= 9; i[2]++)
                {
                    int p2=0;
                    for (int j2 = 0; j2 < 2; j2++) if (i[2] == i[j2]) p2 = 2;
                    if (p2 != 2) {
                        for (i[3] = 1; i[3] <= 9; i[3]++)
                        {
                            int p3=0;
                            for (int j3 = 0; j3 < 3; j3++) if (i[3] == i[j3]) p3 = 3;
                            if (p3 != 3) {
                                for (i[4] = 1; i[4] <= 9; i[4]++)
                                {
                                    int p4=0;
                                    for (int j4 = 0; j4 < 4; j4++) if (i[4] == i[j4]) p4 = 4;
                                    if (p4 != 4) {
                                        for (i[5] = 1; i[5] <= 9; i[5]++)
                                        {
                                            int p5=0;
                                            for (int j5 = 0; j5 < 5; j5++) if (i[5] == i[j5]) p5 = 5;
                                            if (p5 != 5) {
                                                for (i[6] = 1; i[6] <= 9; i[6]++)
                                                {
                                                    int p6=0;
                                                    for (int j6 = 0; j6 < 6; j6++) if (i[6] == i[j6]) p6 = 6;
                                                    if (p6 != 6) {
                                                        for (i[7] = 1; i[7] <= 9; i[7]++)
                                                        {
                                                            int p7=0;
                                                            for (int j7 = 0; j7 < 7; j7++) if (i[7] == i[j7]) p7 = 7;
                                                            if (p7 != 7) {
                                                                for (i[8] = 1; i[8] <= 9; i[8]++)
                                                                {
                                                                    int p8=0;
                                                                    for (int j8 = 0; j8 < 8; j8++) if (i[8] == i[j8]) p8 = 8;
                                                                    if (p8 != 8) {
                                                                        //printf("%d %d %d %d %d %d %d %d %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7], i[8]);
                                                                        int a = 100 * i[0] + 10 * i[1] + i[2];
                                                                        int b = 100 * i[3] + 10 * i[4] + i[5];
                                                                        int c = 100 * i[6] + 10 * i[7] + i[8];
                                                                        double d1 = double(a) / b;
                                                                        double d2 = double(c) / b;
                                                                        if (d1 == 0.5 && d2 == 1.5)
                                                                        {
                                                                            printf("%d %d %d\n", a, b, c);
                                                                            //system("pause");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
} 

