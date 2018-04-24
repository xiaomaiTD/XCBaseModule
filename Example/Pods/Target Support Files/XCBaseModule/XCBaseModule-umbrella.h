#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "XCAppConfigure.h"
#import "NSBundle+XCLoad.h"
#import "NSObject+XCLog.h"
#import "UIImage+XCLoad.h"
#import "UIView+XCLoad.h"
#import "UIViewController+XCLoad.h"
#import "XCUserNetwork.h"
#import "XCUserService.h"

FOUNDATION_EXPORT double XCBaseModuleVersionNumber;
FOUNDATION_EXPORT const unsigned char XCBaseModuleVersionString[];
