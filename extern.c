int main()
{
    extern int a;
    printf("%d %d", a++, ++a);
    return 0;
}
int a = 4;