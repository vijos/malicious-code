// 使用 gcc / g++ 编译会吃掉大量内存 且会超时
int f(int num) {
    return num;
}
#define TEN(i, t) (t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i), t[++i] = f(i))
#define HUN(i, t) (TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t),TEN(i, t))
#define THO(i, t) (HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t),HUN(i, t))
#define TTT(i, t) (THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t),THO(i, t))
#define YYY(i, t) (TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t),TTT(i, t))
#define UUU(i, t) (YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t),YYY(i, t))
#define III(i, t) (UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t),UUU(i, t))
#define OOO(i, t) (III(i, t),III(i, t),III(i, t),III(i, t),III(i, t),III(i, t),III(i, t),III(i, t),III(i, t),III(i, t))
#define PPP(i, t) (OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t),OOO(i, t))
int arr[99999999999];
int main(int argc, char const *argv[])
{
    int i = 0;
    PPP(i, arr);
    return 0;
}
