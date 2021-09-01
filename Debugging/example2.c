int var1 = 100;
int var2;
static int var3 = 200;
static int var4;

const int var5 = -1;

static const int var6 = 100;


int function1(int* val)
{
    (*val)++;
    return *val;
}

static int function2()
{
    static int y = 100; // data segment
    y++;
    return y;
}

int main()
{
    int a = 10;
    int f11 = function1(&a);
    int f12 = function1(20);
    int f21 = function2();
    int f22 = function2();

    printf("f11 = %d, f12 = %d\nf21 = %d, f22 = %d", f11, f12, f21, f22);

}