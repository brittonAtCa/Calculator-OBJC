//
//  SimpleCalculatorController.h
//  Calculator
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 01/08/2017
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "OperationTypeEnum.h"
#import "OperationTypeEnumHelper.h"

@interface SimpleCalculatorController : BaseController

/**
* Completion block definition for asynchronous call to Calculate */
typedef void (^CompletedGetCalculate)(BOOL success, HttpContext* context, NSNumber* response, NSError* error);

/**
* Calculates the expression based on the operator x and y
* @param    operattion    Required parameter: Example: 
* @param    x    Required parameter: Example: 
* @param    y    Required parameter: Example: 
* @param    operation    Required parameter: Example: 
*/
- (void) getCalculateAsyncWithOperattion:(enum OperationTypeEnum) operattion
                x:(double) x
                y:(double) y
                operation:(NSString*) operation
                completionBlock:(CompletedGetCalculate) onCompleted;

@end