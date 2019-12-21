## 插件使用案例：
### 使用说明：
对于Qt使用插件而言，一般分为两个步骤：  
#### 1. 项目文件中链接库文件和头文件  
添加方式一般有静态链接和动态链接：  

  * 静态链接：将dll文件和lib(a)文件以及h文件放置在Qt安装目录下，索引路径为Qt安装目录  
 ```c++
 #静态链接mingw----------注意debug和release的库文件要分开
# 1QWT
DEFINES += QT_DLL QWT_DLL
LIBS += -L"D:\Qt\Qt5.9.6\5.9.6\mingw53_32\lib" -llibqwtd    #debug编译
#LIBS += -L"D:\Qt\Qt5.9.6\5.9.6\mingw53_32\lib" -llibqwt    #release编译
INCLUDEPATH += D:\Qt\Qt5.9.6\5.9.6\mingw53_32\include\qwt   #包含QWT头文件
 ```
 * 动态链接：将dll文件和lib(a)文件以及h文件放置在工程路径下，索引路径为Qt工程路径
```c++
 #动态链接
 LIBS += -L$$PWD/ -llibqwbatteryplugind  #此命令将读取工程文件夹中的libqwbatteryplugind.a文件
 INCLUDEPATH += $$PWD/include            #此命令将读取工程文件夹下的include文件夹中的libqwbatteryplugind.a文件
 $$PWD指的是当前工作路径，即为.pro文件所在路径
```
  **注意：**  
* 一般msvc编译插件工程，生成dll文件和lib文件；mingw编译插件工程，生成dll文件和a文件  
* 而debug编译生成的dll文件和lib文件会有d后缀，release编译生成则没有
* 根据编译工具和debug/release正确选择库文件，库文件需进行匹配，例如：  
  * 工程文件采用mingw工具编译，debug运行，则需采用的库文件应采用-d.dll和-d.a;release则采用-.dll和-.a
  * 若采用msvc工具编译，debug运行，则需采用的库文件应采用-d.dll和-d.lib;release则采用-.dll和-.lib
  
  #### 2. Qt工具中添加库文件
    同样需要根据工程编译情况进行添加，一般而言：
    * 将库文件复制到Qt的IDE路径（为了Qt编译器编译时支持），对于mingw,          ————即为第一步做准备
      将-.dll文件和-d.dll复制到Qt的IDE路径, D:\Qt\Qt5.9.1\5.9.1\mingw53_32\lib;  
      将-.a文件和-d.a文件复制到D:\Qt\Qt5.9.1\5.9.1\mingw53_32\bin
    * 将库文件复制到Qt的designer库路径  （为了Qt Creator中的Qt designer显示该插件）
       将dll文件复制到D:\Qt\Qt5.9.6\Tools\QtCreator\bin\plugins\designer目录下
      需要注意Qt creator版本  
      ![图片](https://github.com/zlocker/qtLearnDemo/blob/master/QwtQucCusPulgin/photo.png)  
      如图对应的为Qt5.9.1，且为MSVC 2015,32 bit编译，则对应放入designer中的dll文件也应采用该Qt版本下的
      msvc 32bit进行编译
  #### 3. Qt工具中添加头文件
   INCLUDEPATH += D:\Qt\Qt5.9.6\5.9.6\mingw53_32\include\qwt文件夹中添加头文件————即为第一步做准备
### 功能：
  1. 使用Qwt插件，在.pro项目文件中添加
  2. 使用Quc插件
  3. 使用自定义pluginBattery插件
