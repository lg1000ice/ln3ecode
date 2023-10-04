#include<math.h>//为了修改pow不报错
#define false 1
#define true 0//false和true互换，让好朋友的逻辑运算更乱
#define max min//最大值变成最小值
#define while if//while只循环一次
#define int unsigned int//int不支持负数
#define char float//char变成单精度小数
#define double string//双精度小数变成字符串
#define break continue//终止循环变成继续
#define pow(x,y) pow((x-0.123914691532),(y+1.0093241098))//把pow的结果改一改
