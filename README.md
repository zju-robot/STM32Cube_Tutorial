# 以PlatformIO为开发平台的STM32教程例程

## 背景

为了使干事能快速学会怎样使用STM32完成机器人制作过程中的各个需求，机协启动了自己的STM32教程的编写。该仓库存储了这套教程中所有的例程，以方便同学们在照着教程实现功能时有一个完整的工程可供参考而不至于陷入无头苍蝇的境地。虽然教程中的讲解已经足够详细，但是毕竟没有提供完整的代码文件。该仓库中将存储例程的代码文件和STM32CubeMX文件，用户经过简单的操作就可以构建完整的工程。

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

进入代码所在的文件夹，打开终端，执行：

```powershell
pio init --ide vscode -b genericSTM32F103RB --project-option="framework=stm32cube" --project-option="debug_tool=stlink"
```

其中`--ide`参数指的是当前使用的编辑器。此处以Visual Studio Code为例；可以更改为自己使用的编辑器，详见`pio init -h`。

`-b`参数指的是该工程将要使用的开发板，此处以STM32F103RB为例。该仓库各例程适用于F1系列的各个芯片，可以修改为自己使用的MCU；可使用的开发板列表见`pio boards`。

或者嫌命令太长的话，可以简单地执行：

```powershell
pio init --ide vscode -b genericSTM32F103RB
```

然后进入platformio.ini文件，修改为：

```ini
[env:genericSTM32F103RB]
platform = ststm32
board = genericSTM32F103RB
framework = stm32cube
debug_tool = stlink
```

### Keil

打开STM32CubeMX文件，切换到Project Manager界面，选择工具链为“MDK-ARM”，并确定版本：

![](https://github.com/zju-robot/STM32Cube_Tutorial/blob/master/Documents/img/README_01.png)

重新生成代码，即可得到Keil工程。

### STM32CubeIDE

打开STM32CubeMX文件，切换到Project Manager界面，选择工具链为“STM32CubeIDE”：

![](https://github.com/zju-robot/STM32Cube_Tutorial/blob/master/Documents/img/README_02.png)

重新生成代码，即可得到STM32CubeIDE工程。
