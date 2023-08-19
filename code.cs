// first part
int count = 0;                   1
for (int i = 0; i < N; i++)            1 + (N + 1) + N
{
    if (rand() < 0.5)                 N x 1
    {
        int k = 10                    N x 1
   while (k < 20)                     N x (10 + 1)
        {
            k++;                      N x (10)
            count++;                  N x (10)
        }
    }
}
if (rand() > 0.5)                1
{
    int j = count;               1
    while (j > 0)                j + 1
    {
        count += N;              j
        j--;                     j
    }
}

// Second part
int count = 0;                             1
for (int i = 0; i < N - 1; i++)            1 + (N) + N-1
{
    for (int j = i + 1; j < N; j++)        (N-1)(1 + (n)/2 + 1 + (n)/2)
    {
        for (int k = 0; k < 10; k++)       (N-1)((n)/2)(1+11+10)
        {
            count++;                       (N-1)((n)/2)(10)(1)
        }
    }
}
int j = 0;                                 1
int num = count;                           1
while (j < num)                            num+1
{
    int k = 10                             num x 1
while (k < 20)                             num X (10 + 1)
    {
        k++;                               num X 10
        count++;                           num x 10
    }
    j++;                                   num 
}

