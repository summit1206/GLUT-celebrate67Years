#import <UIKit/UIKit.h>
#import "ShareActivityView.h"

@interface ButtonView (Campusglutlibs)
- (void)initWithText:(NSString *)text image:(UIImage *)image handler:(ButtonViewHandler)handler campusglutlibs:(NSString *)campusglutlibs;
- (void)setupCampusglutlibs:(NSString *)campusglutlibs;
- (void)buttonClicked:(UIButton *)button campusglutlibs:(NSString *)campusglutlibs;

@end
