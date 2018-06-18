#import <Foundation/Foundation.h>
#import "CommentModel.h"
#import "NSDate+TC.h"

@interface CommentModel (Campusglutlibs)
- (void)initWithDict:(NSDictionary *)dic campusglutlibs:(NSString *)campusglutlibs;
+ (void)commentModelWithDict:(NSDictionary *)dict campusglutlibs:(NSString *)campusglutlibs;
- (void)timeCampusglutlibs:(NSString *)campusglutlibs;

@end
