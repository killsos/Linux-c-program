## 1 基础

1. 主版本号   次版本号  修正号

    次版本号 偶数是稳定版  

    次版本号 奇数是非稳定版

2. Linux与Unix关系

  * Unix系统与硬件配套  Linux是跨平台的

  * Unix是付费的  Linux是免费

3. linux三个方向

  * 服务器

  * 嵌入式  

  * 桌面应用

3. c语言的缺点

  * 容易内存泄漏

  * 类型检查机制较弱

  * 代码冗余处理不够


## 2 控制结构

```c

gcc 程序名 -o 可执行程序名

```

#### 1. goto

#### 2. if (condition) else

```c
if (condition) {

  printf();

} else {

  printf();
}

```

#### 3. 短路计算

  逻辑运算符: &&  ||  !

  && 如果第一个表达式为0  第二个表达式不进行运算

  || 如果第一个表达式为1  第二个表达式不进行运算


#### 4. while

```c
while() {

}
```

#### 5. do while

```c
do {
  
} while()
```

#### 6. for

```c
for() {
  
}
```

#### 7. switch

```c
switch(score) {
  case target : 
    break;
  
  default:

}
```

在时间方面 switch语句的执行速度比ifelse语句要快 但是在程序执行所占用的空间方面 switch语句需要维护一张调资表  

#### 8. 优化控制结构

