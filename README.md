# 以PlatformIO为开发平台的STM32教程例程

## 背景

为了使干事能快速学会怎样使用STM32完成机器人制作过程中的各个需求，机协启动了自己的STM32教程的编写。该仓库存储了这套教程中所有的例程，以方便同学们在照着教程实现功能时有一个完整的工程可供参考而不至于陷入无头苍蝇的境地。虽然教程中的讲解已经足够详细，但是毕竟没有提供完整的代码文件。该仓库中将存储例程的代码文件和STM32CubeMX文件，用户经过简单的操作就可以构建完整的工程。

## 特别注意

例程中均按照教材所用开发板所搭载单片机STM32F103RB为例配置，包括STM32CubeMX中的配置以及上述的PlatformIO配置。如果同学们使用的是其他芯片，则需要自行创建工程、按照自己的开发板配置。切勿盲目复制例程代码。

## 结构

本仓库中工程完全按照教材的结构布置，对应每章中引用到的相关工程。每个工程下的文件结构如下：

```
├─Inc
├─Src
└─$PROJECTNAME.ioc
```

`Inc`文件夹中包含全部的头文件，`Src`文件夹中包含全部的源文件，`$PROJECTNAME.ioc`文件为STM32CubeMX文件。

## 使用

### PlatformIO

进入代码所在的文件夹，创建文本文件platformio.ini，向其中写入：

```ini
[platformio]
src_dir = ./Src
include_dir = ./Inc

[env:stm32cube_tutorial]
platform = ststm32
board = genericSTM32F103RB
framework = stm32cube
debug_tool = stlink
upload_protocol = stlink
```

然后使用Visual Studio Code或其他安装了PlatformIO插件的编辑器打开该文件夹，便可识别出PlatformIO工程。

### Keil

打开STM32CubeMX文件，切换到Project Manager界面，选择工具链为“MDK-ARM”，并确定版本：

![](https://github.com/zju-robot/STM32Cube_Tutorial/blob/master/Documents/img/README_01.png)

重新生成代码，即可得到Keil工程。

### STM32CubeIDE

打开STM32CubeMX文件，切换到Project Manager界面，选择工具链为“STM32CubeIDE”：

![](https://github.com/zju-robot/STM32Cube_Tutorial/blob/master/Documents/img/README_02.png)

重新生成代码，即可得到STM32CubeIDE工程。
