# Getting started

## How to Build


The generated code has dependencies over external libraries like UniRest. These dependencies are defined in the ```PodFile``` file that comes with the SDK. 
To resolve these dependencies, we use the Cocoapods package manager.
Visit https://guides.cocoapods.org/using/getting-started.html to setup Cocoapods on your system.
Open command prompt and type ```pod --version```. This should display the current version of Cocoapods installed if the installation was successful.

Using command line, navigate to the directory containing the generated files (including ```PodFile```) for the SDK. 
Run the command ```pod install```. This should install all the required dependencies and create the ```pods``` directory in your project directory.

![Installing dependencies using Cocoapods](http://apidocs.io/illustration/objc?step=AddDependencies&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Open the project workspace using the (Calculator.xcworkspace) file. Invoke the build process using `Command(⌘)+B` shortcut key or using the `Build` menu as shown below.

![Building SDK using Xcode](http://apidocs.io/illustration/objc?step=BuildSDK&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)


## How to Use

The generated code is a Cocoa Touch Static Library which can be used in any iOS project. The support for these generated libraries go all the way back to iOS 6.

The following section explains how to use the Calculator library in a new iOS project.     
### 1. Starting a new project
To start a new project, left-click on the ```Create a new Xcode project```.
![Create Test Project - Step 1](http://apidocs.io/illustration/objc?step=Test1&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Next, choose **Single View Application** and click ```Next```.
![Create Test Project - Step 2](http://apidocs.io/illustration/objc?step=Test2&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Provide **Test-Project** as the product name click ```Next```.
![Create Test Project - Step 3](http://apidocs.io/illustration/objc?step=Test3&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Choose the desired location of your project folder and click ```Create```.
![Create Test Project - Step 4](http://apidocs.io/illustration/objc?step=Test4&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

### 2. Adding the static library dependency
To add this dependency open a terminal and navigate to your project folder. Next, input ```pod init``` and press enter.
![Add dependency - Step 1](http://apidocs.io/illustration/objc?step=Add0&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Next, open the newly created ```PodFile``` in your favourite text editor. Add the following line : pod 'Calculator', :path => 'Vendor/Calculator'
![Add dependency - Step 2](http://apidocs.io/illustration/objc?step=Add1&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)

Execute `pod install` from terminal to install the dependecy in your project. This would add the dependency to the newly created test project.
![Add dependency - Step 3](http://apidocs.io/illustration/objc?step=Add2&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)


## How to Test

Unit tests in this SDK can be run using Xcode. 

First build the SDK as shown in the steps above and naivgate to the project directory and open the Calculator.xcworkspace file.

Go to the test explorer in Xcode as shown in the picture below and click on `run tests` from the menu. 
![Run tests](http://apidocs.io/illustration/objc?step=RunTests&workspaceFolder=Calculator-ObjC&workspaceName=Calculator&projectName=Calculator&rootNamespace=Calculator)


## Initialization

### 

Configuration variables can be set as following.
```Objc

```

## Class Reference

### <a name="list_of_controllers"></a>List of Controllers

* [simplecalculator](#simplecalculator)

### <a name="simplecalculator"></a>![Class: ](http://apidocs.io/img/class.png ".simplecalculator") simplecalculator

#### Get singleton instance
```objc
SimpleCalculator* simpleCalculator = [[SimpleCalculator alloc]init] ;
```

#### <a name="get_calculate_async_with_operattion"></a>![Method: ](http://apidocs.io/img/method.png ".simplecalculator.getCalculateAsyncWithOperattion") getCalculateAsyncWithOperattion

> Calculates the expression based on the operator x and y


```objc
function getCalculateAsyncWithOperattion:(enum OperationTypeEnum) operattion
                x:(double) x
                y:(double) y
                operation:(NSString*) operation
                completionBlock:(CompletedGetCalculate) onCompleted(operattion x : x y : y operation : operation)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| operattion |  ``` Required ```  | TODO: Add a parameter description |
| x |  ``` Required ```  | TODO: Add a parameter description |
| y |  ``` Required ```  | TODO: Add a parameter description |
| operation |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    OperationTypeEnum operattion = SUM;
    double x = 161.136974553176;
    double y = 161.136974553176;
    NSString* operation = @"operation";

    [self.simpleCalculator getCalculateAsyncWithOperattion: operattion x : x y : y operation : operation  completionBlock:^(BOOL success, HttpContext* context, NSNumber* response, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)



