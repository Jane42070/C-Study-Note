#include <stdio.h>	// #:关键标识符，表示引入头文件；include：引入头文件的关键字
// stdio.h：系统标准输入、输出库对应的头文件。给 printf 函数服务
#include <unistd.h> // sleep 函数库
#include <stdlib.h>
// <>: 使用系统库函数，"": 用户自义定库函数

// main function
// int: 函数返回值是整型数据。
// main: 函数名、程序唯一的入口，且只有一次。void：函数调用无需传参
/** int main(void){ */
/**     // 函数体起始位置 */
/**     printf("Hello World\n"); */
/**     // 解决一闪而过的提示窗口 */
/**     // 1. 通过 system() 函数解决 */
/**     // 在 return 0; 之前添加 */
/**     // window 上 system("pause"); */
/**     // linux 上 system("read") */
/**     // 2. 通过 vs 工具解决 */
/**     // 在项目上 -> 右键 -> 属性 -> 配置属性 -> 连接器 -> 系统 -> 子系统 -> */
/**     // 在下拉框中选择 "控制台(/SUBSYSTEM:CONSOLE)" */
/**     [> system("cal"); <] */
/**     return 0;		// 返回当前函数调用 --- 退出程序 */
/**     // 函数体结束位置 */
/** } */

int main(void){
	printf("HELLO WORLD");
	/** sleep(1); */
	int a;
	int b;
	int c;

	printf("%d\n", c);
	return 0;
}
