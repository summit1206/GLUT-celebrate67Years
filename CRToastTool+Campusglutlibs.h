#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CRToastTool.h"
#import "CRToast.h"

@interface CRToastTool (Campusglutlibs)
+ (void)dismissAllNotificationsCampusglutlibs:(NSString *)campusglutlibs;
+ (void)showNotificationWithTitle:(NSString *)title backgroundColor:(UIColor *)color completionBlock:(void (^)(void))completion campusglutlibs:(NSString *)campusglutlibs;
+ (void)showNotificationWithTitle:(NSString *)title backgroundColor:(UIColor *)color timeInterval:(NSNumber*)timeInterval completionBlock:(void (^)(void))completion campusglutlibs:(NSString *)campusglutlibs;
+ (void)optionsWithMessage:(NSString *)message  backgroundColor:(UIColor *)backgroundColor timeInterval:(NSNumber*)timeInterval campusglutlibs:(NSString *)campusglutlibs;

@end
